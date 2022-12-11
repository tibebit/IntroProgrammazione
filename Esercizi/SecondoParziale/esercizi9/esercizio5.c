#include<stdio.h>
#include<stdlib.h>

struct nodo {
  int info;
  struct nodo *next;
};

typedef struct nodo elemento;
typedef elemento *lista;

lista genera_lista(int size) {
  lista a;
  lista nuovo = malloc(sizeof(elemento));
  nuovo->info = 0;
  nuovo->next = NULL;
  a = nuovo;
  
  for (int i = 1; i < size; i++) {
    nuovo->next = malloc(sizeof(elemento));
    nuovo = nuovo->next;
    nuovo->info = i;
  }

  return a;
}

lista new_head(lista a, int k) {
  // salvo la testa in caso k esca dal range prestabilito
  lista head = a;
  // avanzo di k posizioni finche ci sono elementi in lista e k e'maggiore di zero
  while (a->next != NULL && k > 0) {
    k --;
    a = a->next;
  }
  // controllo che k non abbia sforato gli indici della lista
  if (k == 0 && a != NULL)
    return a;
  else
    return head;
}

void stampa_lista(lista a) {
  if (a == NULL) return;
  printf("%d\n", a->info);
  stampa_lista(a->next);
}

void main() {
  lista a = genera_lista(5);
  stampa_lista(a);
  lista sottolista = new_head(a, 0);
  stampa_lista(sottolista);
}