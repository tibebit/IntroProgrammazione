#include<stdio.h>

void main()
{
  // numero di elementi da considerare
  int n;
  printf("Inserire il valore di n: ");
  scanf("%d", &n);

  printf("Ti stamperò i quadrati perfetti fino a n\n");
/*
  for (int i = 1; i <= n; i++) 
  {
    printf("Il quadrato di %d è %d\n", i, i*i);
  }

  // scrivo il for "alla rovescia"
  for (int i = n; i >= 1; i--) 
  {
    printf("Il quadrato di %d è %d\n", i, i*i);
  }
*/
  int i = 1;
  while (i <= n) {
    printf("Il quadrato di %d è %d\n", i, i*i);
    i++;
  }

  while (n > 0) {
    printf("Il quadrato di %d è %d\n", n, n*n);
    n = n - 1;
  }
  
}