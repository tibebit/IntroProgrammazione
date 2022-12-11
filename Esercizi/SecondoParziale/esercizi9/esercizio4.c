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
  
  for (int i = 1; i <= size; i++) {
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


lista inserimento_ordinato(lista a, int elemento) {
  lista testa = a;
  // se l'elemento da inserire e' il piu'piccolo di tutti,
  if (a->info > elemento) {
    lista nuovo = a->next;
    if (nuovo->info > elemento) {
      lista nuova_testa = malloc(sizeof(elemento));
      nuova_testa->info = elemento;
      nuova_testa->next = a;
      // lo ritorno come nuova testa della lista
      return nuova_testa;
    }
  } 
  // altrimenti
  else {
    // finche' ci sono elementi nella lista,
    while (a->next != NULL) {
      lista nuovo = a->next;
      // se trovo che l'elemento da inserire e'maggiore di un elemento della lista e piu'piccolo del successivo
      if (nuovo->info > elemento) {
        // lo inserisco fra i due
        lista inserimento = malloc(sizeof(elemento));
        inserimento->info = elemento;
        a->next = inserimento;
        inserimento->next = nuovo;
        return testa;
      } else {
          a = a->next;
      }
    }
    // Infine, se ho scorso tutta quanta la lista,
    if (a->next == NULL) {
      // creo un elemento e lo inserisco in coda alla lista
      lista nuova_coda = malloc(sizeof(elemento));
      nuova_coda->info = elemento;
      a->next = nuova_coda;
      return testa;
    }
  }
}


int main() {
  lista a = genera_lista(10);
  //stampa_lista(a);
  int elemento = 9;
  lista nuovo = inserimento_ordinato(a, elemento);
  stampa_lista(nuovo);
}

