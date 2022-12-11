#include<stdio.h>
// calcola la sommatoria di y elevato alla i per i che va da 1 a x
// OSS per i > 2 il passaggio y*y sara'sempre da fare
void main() {
  int x,y;

  printf("Inserisci il numero x: ");
  scanf("%d", &x);
  printf("Inserisci il numero y: ");
  scanf("%d", &y);

  
  int summation = 0;
  for (int i = 0; i < x; i++) {
    int prodotto;
    prodotto = y*y
    summation = summation + prodotto
  }

  printf("La sommatoria di y alla i per i che va da 1 a %d e':%d\n", x, summation);
}