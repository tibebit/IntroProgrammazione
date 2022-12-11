#include<stdio.h>

float potenza_ricorsiva(float argomento, int esponente) {
  if (esponente == 1) return argomento;
  else return argomento * potenza_ricorsiva(argomento, esponente - 1);
}

float sommatoria_ricorsiva(int n) {
  if (n == 0) return 1;
  else return 1.0/(potenza_ricorsiva(2*n+1, 2)) + sommatoria_ricorsiva(n-1);
}

void main() {
  int n;
  printf("Insersci il numero n: ");
  scanf("%d", &n);
  float risultato = sommatoria_ricorsiva(n);
  printf("Il risultato è: %lf\n", risultato);
}