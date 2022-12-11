#include<stdio.h>
#include<math.h>

double a_n_1_p(int n, double p) {
  double a_i = p;
  printf("a_1_p = %lf", p);
  
  for (int i = 2; i <= n; i++) {
    a_i = 0.5*(a_i + p/a_i);
    printf("a_%d = %lf\n", i, a_i);
  }
  return a_i;
}

void main() {
  int n;
  double p;
  printf("Inserisci n: ");
  scanf("%d", &n);
  printf("Inserisci p: ");
  scanf("%d", &p);

  a_n_1_p(n,p);
}