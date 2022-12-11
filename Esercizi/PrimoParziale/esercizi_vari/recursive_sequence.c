#include<stdio.h>

int sequence(int n) {
  int a_0 = 2;
  int a_1 = 3;
  int a_i;
  
  printf("a_0 is %d\n", a_0);
  printf("a_1 is %d\n", a_1);
  
  for (int i = 2; i <= n; i++) {
    a_i = a_0 * a_1;
    a_0 = a_1;
    a_1 = a_i;
    printf("a_%d is %d\n", i, a_i);
  }
}

void main () {
  int n;
  printf("Insert a positive integer n:");
  scanf("%d", &n);
  sequence(n);
}