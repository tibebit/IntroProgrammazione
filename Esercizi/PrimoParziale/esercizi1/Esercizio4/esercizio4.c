#include<stdio.h>

void main() {
  float sum = 0;
  int input = -1;
  int count = -1;
  
  printf("Ti chiederò di inserire n numeri.\nQuando ti stufi inserisci 0 e ti mostrerò la media dei numeri inseriti\n");

  while (input != 0) {
    printf("Inserisci il numero x_%d: ", count);
    scanf("%d", &input);
    sum = sum+input;
    count++;
  }

  do {
    
  } while(input!=0);

  printf("%f", sum/count);
}