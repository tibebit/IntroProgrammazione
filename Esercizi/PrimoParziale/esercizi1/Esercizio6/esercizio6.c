#include<stdio.h>

void main() {
  int a, b;
  printf("Calcolo della potenza \"a elevato alla b\"\n");
  
  printf("Inserisci il numero a: ");
  scanf("%d", &a);
  printf("Inserisci il numero b: ");
  scanf("%d", &b);
  printf("%d elevato alla %d dà come risultato: ", a, b);
  int potenza = a;
  for (int i = 1; i < b; i++) {
    potenza = potenza * a;
  }

  printf("%d\n", potenza);
}