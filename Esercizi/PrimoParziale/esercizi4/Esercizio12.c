#include<stdio.h>

// successione degli sn = 2^n
int successione_ricorsiva(int n) {
  if (n==1) return 2;
  else return 2 * successione_ricorsiva(n-1);
}

// produttoria degli Xa,b dati da (si/a)-b per i che va da a fino a b/2
double produttoria_iterativa(int a, int b) {
  double risultato = 1;
  for (int i = a; i <= b/2; i++)
    risultato *= (successione_ricorsiva(i)/a);

  return risultato-b;
}

void main() {
  int a,b;
  printf("Insersci il numero a: ");
  scanf("%d", &a);
  printf("Inserisci il numero b(>a): ");
  scanf("%d", &b);
  double risultato = produttoria_iterativa(a, b);
  printf("Il risultato della produttoria X(a,b): %lf\n", risultato);
}