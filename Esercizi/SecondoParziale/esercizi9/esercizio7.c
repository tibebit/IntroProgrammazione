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


void stampa_lista(lista a) {
  if (a == NULL) return;
  printf("%d\n", a->info);
  stampa_lista(a->next);
}


lista inverti(lista a) {
  lista prossimo = a->next;
  lista copia_prossimo = a->next->next;
  prossimo->next = a;
  a->next = NULL;
  
  while (copia_prossimo != NULL) {
    //copia_prossimo = copia_prossimo->next;
    lista previous = copia_prossimo;
    copia_prossimo = copia_prossimo->next;
    previous->next = prossimo;
    prossimo = previous;
  }
  
  return prossimo;
}

lista inverti_ricorsivamente(lista a) {
}


void main() {
  lista a = genera_lista(10);
  stampa_lista(a);
  printf("-----------\n");
  lista a_invertita = inverti(a);
  stampa_lista(a_invertita);
}