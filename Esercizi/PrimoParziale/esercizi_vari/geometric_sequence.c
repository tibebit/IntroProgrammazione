#include<stdio.h>

void sequence(int n) {
  float a_1 = -(1.0/8.0);
  float a_i;
  
  printf("a_1 is %f\n", a_1);
  
  for (int i = 2; i <= n; i++) {
    a_i = 2*a_1;
    a_1 = a_i;
    printf("a_%d is %f\n", i, a_i);
    }
}

void main () {
  int n;
  printf("Insert a positive integer n:");
  scanf("%d", &n);
  sequence(n);
}