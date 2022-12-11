#include<stdio.h>


void scambia(int *p, int dim, int i, int j) {
  if(i<dim && i>0 && j<dim && j>0) {
    int temp = *(p+i);
    *(p+1) = *(p+j);
    *(p+j) = temp;
  }
  
}


int main() {
  int v[] = {0, 2, 1, 3};
  int *p;
  p = v;
  
  printf("valore di v: %p\n", v); // tipo di dato int *
  printf("valore di &v[0]: %p\n", &v[0]); // tipo di dato: int *
  printf("valore di &v: %p\n", &v); // tipo di dato int (*)[4]

  scambia(&v[0], 4, 1, 2);
  
  for(int i = 0; i < 4;i ++) {
    printf("v[%d] = %d\n", i, v[i]);
  }
  return 0;
}