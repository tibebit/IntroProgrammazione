#include<stdio.h>

double potenza(double base, int esponente) {
  if (esponente == 1) return base;
  else return base * potenza(base, esponente-1);
}
doule potenza_iterativa(double base, int esponente) {
  int x = 1;
  for (int i = 1; i <= esponente; i++) {
    x = x*base;
  }
  return x;
}
double sommatoria(int n, double k) {
  if (n==1) return (1.0*potenza(k, 2))/3;
  else return (n*potenza(k, n+1)/potenza(3,n)) + sommatoria(n-1,k);
}

void main() {
  int n;
  double k;
  printf("Inserisci n: ");
  scanf("%d", &n);
  printf("Inserisci k:");
  scanf("%lf", &k);

  printf("Il valore della sommatoria di i * k elevato alla i +1, il tutto diviso per 3 elevato alla i, per i che va da 1 a n è: %f", sommatoria(n, k));
}