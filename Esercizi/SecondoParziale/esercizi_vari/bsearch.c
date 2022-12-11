#include<stdio.h>


int bsearch(int *a, int from, int to, int x) {
  int med = (from+to)/2;
  
  if (*(a+med) == x) return 1;
  if (to <= from) return 0;
  if (*(a+med)>x) {
    bsearch(a, from, med-1, x);
  } else {
    bsearch(a, med+1, to, x);
  }
}

void main() {
  int a[8] = {1,2,3,4,5,6,7};
  
  if (bsearch(a, 0, 5, 1))
    printf("Trovato!");
  else
    printf("Non trovato!");
}