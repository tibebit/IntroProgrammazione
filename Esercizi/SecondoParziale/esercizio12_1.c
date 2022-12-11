#include<stdio.h>

double potenza(double base, double esponente) {
  if (esponente == 1) return base;
  return base * potenza(base, esponente-1);
}


float calcola_media(int a[], int n) {
  int tmp = 0;
  for (int i = 0; i < n; i ++) 
    tmp += a[i];
  
  return tmp/n;
}


float calcola_sommatoria(int a[], int n) {
  float tmp = 0;
  float media = calcola_media(a, n);
  for (int i = 0; i < n; i ++) {
    tmp += potenza(a[i] - media, 2);
  }

  return tmp;
}


float var(int a[], int n) {
  return calcola_sommatoria(a, n)/n;
}


int main() {
  int a[5] = {1, 2, 3, 4, 5};
  int n = 5;

  float varianza = var(a, n);
  
  printf("Varianza=%f", varianza);
}