#include<stdio.h>

// prendo un numero
// è uguale a 1? se sï è triangolare
// prendo un altro numero N
// parto da 1
// faccio 1 + 2
// se 1+2 = N = 3 = è triangolare
// altrimenti faccio7
// 1+2+3 è uguale a N? continuo finchè 1+2+...+X < N


void * triangolare(int a[], int n) {
  for (int i = 0; i < n; i ++) {
    if (i == 0) a[i] = 1;
    for (int j=1; j <= i+1;j ++){
       a[i] += j;
    }
     
    printf("%d\n", a[i]);
  }
}

void triang(int a[], int n) {
  int tmp;
  for (int i = 0; i < n; i ++) {
    tmp = 0;
    for (int j = 0; j < i; j ++)
      tmp += j;
    a[i] = tmp;
  }
}

void print_array(int a[], int n) {
  for (int i = 0; i < n; i ++) {
   printf("a") 
  }
}

void main() {
  int a[6] = {0, 0, 0, 0, 0, 0};
  triangolare(a,6);
}