#include<stdio.h>
#include<math.h>

double serie(int n) {
  double k_i = 1;
  double s_k = k_i;
  printf("s_k = %lf\n", s_k);
  for(int i=1; i<=n; i++) {
    k_i = 1/pow((2*k_i + 1), 2);
    s_k = s_k + k_i;
    printf("k_%d = %lf\n", i, s_k);
  }
  return s_k;
}


void main() {
  int n;

  printf("Inserisci n: ");
  scanf("%d", &n);

  serie(n);
}