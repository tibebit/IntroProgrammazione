#include<stdio.h>

int sommatoria_n_pari(int a[], int n) {
  int tot = 0;
  for (int i = 0; i < n; i ++) {
    if (a[i] % 2 == 0) tot += a[i];
  }
  return tot;
}

int sommatoria_ric(int a[], int n) {
  if (n == 0) return 0;
  if (a[n-1]%2==0) return a[n-1] + sommatoria_ric(a, n-1);
}

void main() {
  int a[3] = {9, 6, 8}; // 0+4+2+6+8=20

  int result = sommatoria_ric(a,7);
  printf("risultato: %d", result);
}