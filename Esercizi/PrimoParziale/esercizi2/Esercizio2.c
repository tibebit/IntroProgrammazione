#include<stdio.h>

void main() {
  int x,y;

  printf("Inserisci il numero x: ");
  scanf("%d", &x);
  printf("Inserisci il numero y: ");
  scanf("%d", &y);

  
  int summation = 0;
  for (int i = 1; i <= x; i++) {
    int result = 1;
    for (int j = i; j > 0; j--) {
      result = result * y;
    }
    summation = summation + result;
  }

  printf("La sommatoria di y alla i per i che va da 1 a %d e':%d\n", x, summation);
}