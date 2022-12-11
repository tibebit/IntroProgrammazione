#include<stdio.h>

int elementi_tutti_diversi(int a[], int n) {
  for (int i = 0; i < n-1; i ++) {
    for(int j = i+1; j < n; j ++) {
      if (a[i] == a[j]) return 0;
    }
  }
  return 1;
}

void main() {
  int a[5] = {0, 1, 2, 3, 4};
  int result = elementi_tutti_diversi(a, 5);
  printf("%d\n", result);
}