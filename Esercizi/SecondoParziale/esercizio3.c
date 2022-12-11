#include<stdio.h>


void somma_armonica(int n, double *h) {
  if (n == 1) *h = 1.0;
  else {
    somma_armonica(n-1, h);
    *h = 1.0/ n + *h; 
  }
   
}


int main() {
  int n = 5;
  double h;

  somma_armonica(n, &h);
  printf("%lf", h);
}