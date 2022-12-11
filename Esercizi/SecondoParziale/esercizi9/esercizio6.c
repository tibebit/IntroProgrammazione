#include<stdio.h>
#include<stdlib.h>

struct nodo {
  int info;
  struct nodo *next;
};

typedef struct nodo elemento;
typedef elemento *lista;

// size non indica il numero reale di elementi in lista, ma solo quanto "deve durare" il ciclo for
lista genera_lista_con_duplicati(int size) {
  lista a;
  lista nuovo = malloc(sizeof(elemento));
  nuovo->info = 0;
  nuovo->next = NULL;
  a = nuovo;
  
  for (int i = 1; i < size; i++) {
    nuovo->next = malloc(sizeof(elemento));
    nuovo = nuovo->next;
    nuovo->info = i;
    if (i % 2 == 0) {
      nuovo->next = malloc(sizeof(elemento));
      nuovo = nuovo->next;
      nuovo->info = i;
    }
  }

  return a;
}

lista rimuovi_duplicati(lista a) {
  lista head = a;
  lista prossimo = a->next;
  while (a->next != NULL) {
    if (a->info == prossimo->info) {
      a->next = prossimo->next;
      free(prossimo);
    }
    a = a->next;
    prossimo = a->next;
  }
  return head;
}

void stampa_lista(lista a) {
  if (a == NULL) return;
  printf("%d\n", a->info);
  stampa_lista(a->next);
}

void main() {
  lista a = genera_lista_con_duplicati(6);
  printf("LISTA CON DUPLICATI\n");
  stampa_lista(a);
  lista senza_duplicati = rimuovi_duplicati(a);
  printf("LISTA SENZA DUPLICATI\n");
  stampa_lista(senza_duplicati);
}