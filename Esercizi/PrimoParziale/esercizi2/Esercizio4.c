#include<stdio.h>
// Stampa la successione di Fibonacci fino al numero n dato in input

int fibonacci(int n) 
  
}

void main() {
  int n;
  printf("Inserisci un numero n, Calcolerò la sequenza di fibonacci fino all'elemento n-esimo");
  scanf("%d", &n);
  //caso base
  int f0 = 0;
  int f1 = 1;
  printf("F(0)=%d", f0);
  printf("F(0)=%d", f0);

  int fi, fi1 = f1; // f di i meno  1
  int fi2 = f0; // f di i meno 2

  for (int i = 2; i<=n; i++) {
    fi = fi1 + fi2;
    fi2 = fi1;
    fi1 = fi
  }
}