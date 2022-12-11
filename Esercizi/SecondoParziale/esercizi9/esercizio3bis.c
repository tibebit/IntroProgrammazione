#include<stdio.h>
#include<stdlib.h>

struct nodo {
  int info;
  struct nodo *next;
};

typedef struct nodo elemento;
typedef elemento *lista;


lista scorri_lista(lista a) {
  if (a==NULL) return a;
  while (a->next != NULL) {
    a = a->next;
  }
  return a;
}


lista trova_elemento_in_posizione_j(lista a, int limite) {
  int count = 0;
  while (a != NULL && count != limite) {
    count ++;
    a = a->next;
  }

  // ritorno il j-esimo elemento trovato
  return a;
}


int dimensione(lista a) {
  int count = 0;
  while (a != NULL) {
    count ++;
    a = a->next;
  }
  return count;
}


lista unisci_liste(lista a, lista b, int j) {
  
  lista b_scorsa = scorri_lista(b);
  b_scorsa->next = a;
  return b;
}


void stampa_lista(lista a) {
  if (a == NULL) return;
  printf("%d\n", a->info);
  stampa_lista(a->next);
}


lista genera_lista(int size) {
  lista a;
  lista nuovo = malloc(sizeof(elemento));
  

  if (size < 0) {
    int new_size = -size;
    nuovo->info = new_size - 1;
    nuovo->next = NULL;
    a = nuovo;
    for (int i = new_size - 2; i >= 0; i --) {
      nuovo->next = malloc(sizeof(elemento));
      nuovo = nuovo->next;
      nuovo->info = i;
    }
  } else {
     nuovo->info = 0;
     nuovo->next = NULL;
     a = nuovo;
     for (int i = 1; i < size; i++) {
      nuovo->next = malloc(sizeof(elemento));
      nuovo = nuovo->next;
      nuovo->info = i;
    }
  }
  return a;
}


void main() {
  lista a = genera_lista(5);
  lista b = genera_lista(-5);
  int j;
  printf("Lista A:\n");
  stampa_lista(a);

  printf("Lista B:\n");
  stampa_lista(b);


  printf("dimensione di A: %d\n", dimensione(a));
  printf("3o elemento di A: %d\n", trova_elemento_in_posizione_j(a, 3)->info);
}