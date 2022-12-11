#include<stdio.h>

void main() {
  // supponiamo che l'utente ci dia in input 3 numeri
  printf("Ti chiederò di inserire 3 numeri\n");
  float media = 0;
  int input;
  for (int i = 0; i < 3; i++) {
    printf("Inserisci un numero: ");
    scanf("%d", &input);
    media = media+input;
  }
  printf("%f", media/3);
}