#include<stdio.h>

// Controlla se il numero dato in input e' positivo o negativo.
// Restituisce 0 se n e' positivo, 1 se n e' negativo.
int isNegative(int n) {
  if (n >= 0)
    return 0; // vero
  else
    return 1; // falso
}

void main() {
  int a,b;
  int sum, maxSum;

  printf("Inserisci il numero a:");
  scanf("%d", &a);
   printf("Inserisci il numero b:");
  scanf("%d", &b);

  if (isNegative(b) == 1)
    printf("\nb e' positivo\n");
  else 
    printf("b e' negativo\n");

  if (a % 2 == 0)
    printf("a e'pari");
  else
    printf("%d e'dispari\n", a);

  sum = a + b;
  printf("Somma: %d\n", sum);
  
  if (isNegative(a) == 1 && isNegative(b) == 1) {
    maxSum = -a + -b;
    printf("(-a) + (-b) = %d porta al valore massimo\n", maxSum);
  } else if (!(isNegative(a) == 1) && !(isNegative(b) == 1)) {
    printf("(+a) + (+b) = %d porta al valore massimo\n", sum);
  } else {
    if (isNegative(a) == 1 && !(isNegative(b) == 1)) {
      maxSum = -a + b;
      printf("(-a) + (+b) = %d porta al valore massimo\n", maxSum);
    } else if (isNegative(b) == 1 && !((isNegative(a) == 1))) {
      maxSum = a + -b;
      printf("(+a) + (-b) = %d porta al valore massimo\n", maxSum);
    }
  }
  
}
