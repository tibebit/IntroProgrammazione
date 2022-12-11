#include<stdio.h>
#include<math.h>
// serie che converge con valori di k = 1,2
double serie(int n, int k) {
 double a_i = k / 3.0;
  printf("a_1: %f\n", a_i);
 double s_k = a_i;
 for (int i = 2; i <= n; i++) {
   a_i = (i * pow(k, i+1))/ pow(3.0, i);
   printf("a_%d: %f\n", i, a_i);
   s_k = s_k + a_i;
   printf("s_%d: %f\n", i, s_k);
 }
}


void main() {
  int n, k;
  printf("Inserisci n: ");
  scanf("%d", &n);
  printf("Inserisci k: ");
  scanf("%d", &k);

  serie(n, k);
}