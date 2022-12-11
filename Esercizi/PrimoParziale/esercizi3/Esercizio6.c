#include<stdio.h>

double a_n(int n) {
  double a_i = 0.5;
  prinf("a%1 = %lf\n", a_i);
  
  for (int i = 2; i <= n; i++) {
    printf("a%d = %lf\n", i, a_i);
    a_i = (a_i + 1)/2;
  }
  return a_i;
}

void main() {
  int n;
  printf("Inserisci n: ");
  scanf("%d", &n);

  a_n(n);

}

