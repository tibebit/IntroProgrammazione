#include<stdio.h>
#include<stdlib.h>

struct nodo {
  int info;
  struct nodo *next;
};

typedef struct nodo elemento;
typedef elemento *lista;

lista crea_lista() {
  lista a = NULL;
  int n;

  printf("Inserisci un numero: ");
  scanf("%d", &n);
  if (n == -1)
    return a;
  // elemento * nuovo = malloc(sizeof(elementoLista))
  lista nuovo = malloc(sizeof(elemento));
  nuovo->info = n;
  nuovo->next = NULL;
  a = nuovo;
  lista coda;
  coda = nuovo;
  printf("Inserisci un numero: ");
  scanf("%d", &n);
  while (n != -1) {
    nuovo = malloc(sizeof(elemento));
    nuovo->info = n;
    nuovo->next = NULL;
    coda->next = nuovo;
    coda = nuovo;
    printf("Inserisci un numero: ");
    scanf("%d", &n);
  }
  return a;
}


void stampa_lista(lista a) {
  if (a == NULL) return;
  printf("%d\n", a->info);
  stampa_lista(a->next);
}

void stampa_lista_it(lista a) {
  while (a != NULL) {
    printf("%d\n", a->info);
    a = a->next;
  }
}

void main() {
  lista a = crea_lista();
  stampa_lista(a);
}