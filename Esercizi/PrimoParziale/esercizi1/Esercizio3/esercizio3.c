#include<stdio.h>

void main() {
  int x, y;

  printf("Prodotto tra due numeri - (Metodo Contadino Russo)\n");
  printf("Inserisci il numero x: ");
  scanf("%d", &x);
  printf("Inserisci il numero y: ");
  scanf("%d", &y);
  printf("Il prodotto tra %d e %d è: ", x, y);
  int prodotto = 0;
  while (x != 0) {
    if (x % 2 != 0) {
      prodotto = prodotto + y;
    }
    x = x / 2;
    y = y * 2;
  }

  printf("%d\n", prodotto);
}