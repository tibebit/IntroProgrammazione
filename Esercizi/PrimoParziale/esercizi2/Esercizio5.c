#include<stdio.h>
// calcolo del coefficiente binomiale C(n,k)

// calcola e restituisce il fattoriale del numero n
int factorial(int n) {
  int factorial = n;
  
  for (int i = factorial-1; i > 0; i--) {
    factorial = factorial * i;
  }
  return factorial;
}


void main() {
  int n, nFactorial;
  int k, kFactorial;
  int nMinusk, result;

  printf("Inserisci il numero n: ");
  scanf("%d", &n);
  printf("Inserisci il numero k: ");
  scanf("%d", &k);
  if (n >= k)
    nMinusk = n-k;
  else {
    printf("Il coefficiente binomiale di %d su %d e' uguale a: 0", n, k);
    return;
  }
    
  nFactorial = factorial(n);
  
  kFactorial = factorial(k);
  
  nMinusk = factorial(n - k);

  result = nFactorial / (kFactorial * nMinusk);

  printf("Coefficiente binomiale di %d su %d e': %d\n", n, k, result);
}

