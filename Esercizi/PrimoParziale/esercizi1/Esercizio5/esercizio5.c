#include<stdio.h>

void main() {
  int min, n;
  int max = 0;
  int count = 1;
  
  printf("Calcolo del massimo e del minimo data una sequenza di n numeri maggiori di 0\n");

  do {
    printf("Inserisci il numero %d: ", count);
    scanf("%d", &n);
    if (count == 1)
      min = n;
    if (n > max) {
      max = n;
    } else if (n < min) {
      min = n;
    }
    count ++;
  } while (n > 0);

  printf("Il massimo fra i numeri inseriti è: %d\n", max);
  printf("Il minimo fra i numeri inseriti è: %d\n", min);
}