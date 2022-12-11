#include<stdio.h>

int sommatoria(int a[], int n) {
  int tot = 0;
  for (int i = 0; i < n; i ++) {
    tot += a[i];
  }
  return tot;
}

int check(int a[], int b[], int n, int m) {
  for (int i = 0; i < n; i ++) {
    if (a[i] == sommatoria(b, m)) return 1;
  }
  return 0;
}

void main() {
  int a[4] = {1, 2, 3, 14};
  int b[4] = {3, 2, 7, 3};

  int result = check(a, b, 4, 4);

  printf("%d\n", result);
}