#include<stdio.h>
#include<stdlib.h>


int ordine(int a[], int n, int j) {
  for (int i = 0; i<n;i++) {
    if (i<=j && a[i]>j) return 0;
    if (i>j &&a[i]<=j) return 0;
  }
  return 1;
}


void main() {
  int n = 5;
  int j = 3;

  int a[] = {-1, 10, 20, 2, 5};

  if (ordine(a, n, j)) printf("Vale");
  else printf("!Vale");
}

