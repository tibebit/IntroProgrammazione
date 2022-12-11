#include<stdio.h>

int isPrime(int n) {
  for (int i = 2; i < n; i ++) {
    if (n % i == 0) return 1; //false
  }
  return 0; //true
}

int isPrimeRecursive(int n, int divisor) {
  if (n == divisor) return 0;
  if (n % divisor != 0) // still prime
    isPrimeRecursive(n, divisor + 1);
  else 
    return 1; //false
}

void main() {
  int n;
  printf("Inserisci il numero n: ");
  scanf("%d", &n);

  printf("\nITERATIVE\n");
  if (isPrime(n) == 0) {
    printf("%d è un numero primo: vero", n);
  } else {
    printf("%d è un numero primo: falso", n);
  }

  printf("\nRECURSIVE\n");
  if (isPrimeRecursive(n, 2) == 0) {
    printf("%d è un numero primo: vero", n);
  } else {
    printf("%d è un numero primo: falso", n);
  }
}