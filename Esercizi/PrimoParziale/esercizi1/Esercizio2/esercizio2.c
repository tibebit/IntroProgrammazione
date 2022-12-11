#include<stdio.h>

void main() {
  int x,y;

  do {
    printf("Inserisci il numero x: ");
    scanf("%d", &x);
    printf("Inserisci il numero y: ");
    scanf("%d", &y);
  } while (x <= 0 || y <= 0);
  
  printf("Il massimo comune divisore tra %d e %d", x, y);
  
  while (x != y) {
    if (x > y) {
      x = x - y;
    } else {
      y = y - x;
    }
  }
  printf(" è: %d\n", x);
}