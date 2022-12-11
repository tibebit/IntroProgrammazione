#include<stdio.h>

int prodotto_scalare(int a[], int b[], int n) {
  int tot = 0;
  for (int i = 0; i < n; i ++) {
    tot += a[i]*b[i];
  }
  return tot;
}

void main() {
  int a[5] = {0, 1, 2, 3, 4};
  int b[5] = {0, 1, 2, 3, 4};

  printf("%d\n", prodotto_scalare(a,b,5));
}