#include<stdlib.h>
#include<stdio.h>

struct element {
  int info;
  struct element *next;
};

// elemento linked list
typedef struct element ElementoDiLista;
//puntatore a un elemento della linked list
typedef ElementoDiLista *ListaDiElementi;

void main() {
  int n = 10;
  
  ListaDiElementi lista;
  ListaDiElementi new = (ListaDiElementi)malloc(sizeof(ElementoDiLista));
  new->info = 0;
  new->next = NULL;
  lista = new;
  
  for (int i = 1; i <= n; i++) {
    new->next = malloc(sizeof(ElementoDiLista));
    new = new->next;
    new->info = i;
  }
  iterate_through(lista);
}

void iterate_through(ListaDiElementi head) {
  ListaDiElementi iterator = head;

  while(iterator->next != NULL) {
    printf("%d\n", iterator->info);
    iterator = iterator->next;
  }
}