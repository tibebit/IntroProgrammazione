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


int conta_lista_ric(lista a) {
  if (a == NULL) return 0;
  return 1 + conta_lista_ric(a->next);
}

int conta_lista_it(lista a) {
  int count = 0;
  while (a != NULL) {
    printf("%d\n", a->info);
    a = a->next;
    count++;
  }
  return count;
}

void main() {
  lista a = crea_lista();
  int count = conta_lista_ric(a);
  printf("Il conteggio degli elementi e': %d", count);
}