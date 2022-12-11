#include<stdio.h>

// funzione che somma tutti i J per J che va da 0 ad n
// sommatoria degli nJ
int sommatoria_ricorsiva(int j, int i) {
  if (j == i) return j;
  else return j + sommatoria_ricorsiva(j+1, i);
}

// funzione che somma tutti gli nj per j che va da a a b
int sommatoria_iterativa(int a, int b) {
  int x = 0;
  for (int i = a; i <= b; i++) {
    x = x + sommatoria_ricorsiva(0, i);
  }
  return x;
}

void main() {
  int a,b;
  printf("Insersci il numero a: ");
  scanf("%d", &a);
  printf("Inserisci il numero b(>a): ");
  scanf("%d", &b);
  int risultato = sommatoria_iterativa(a, b);
  printf("Il risultato è: %d", risultato);
}