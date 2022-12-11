#include<stdlib.h>
#include<stdio.h>

int is_unique(int element, int a[], int n) {
  for (int i = 0; i < n;i ++) {
    if (element == a[i]) return 0;
  }
  return 1;
}

int conta_elementi_distinti(int a[], int n) {
  int k = 0;
  
  for (int i = 0;i < n;i ++) {
    int current = a[i];
    int j = i+1;
    int is_unique = 1;
    
    while (j < n) {
      if (current == a[j]) {
        is_unique = 0;
      } 
      j++;
    }

    if (is_unique == 1) k++;
  }

  return k;
}

int* rimuovi_duplicati(int a[], int n) {
  int unique_elements = conta_elementi_distinti(a, n);
  int *unique_array = (int *)malloc(sizeof(int)*unique_elements);
  int j = 0;
  for (int i = 0; i< n; i++) {
    if (i==0) {
      unique_array[j] = a[i];
      j++;
    }
    else {
    }
  }
}


void main() {
  int n = 5;
  int a[5] = {-1, 5, -1, 10, 5};
  int b = conta_elementi_distinti(a, 5);
  printf("%d", b);
}


//soluzione
int quanti_diversi(int a[], int n) {
  int k = 0;

  for (int i = 0; i < n; i++) {
    int trovato = cerca_elemento(a, 0, i-1, a[i]);
    if (trovato == 0) {
      k++;
    }
  }
  return k;
}

int cerca_elemento(int a[], int start, int finish, int element) {
  for (int i = start; i<=finish; i++) {
    if (a[i] == element) return 1;
  }
  return 0;
}

int * senza_duplicati(int a[], int n) {
  int k = quanti_diversi(a, n);
  int *senza_duplicati = (int *)malloc(sizeof(int)*k);
  int w = 0;

  for (int i = 0; i < n; i++) {
    int trovato = cerca_elemento(a, 0, i-1, a[i]);
    if (trovato == 0) {
      senza_duplicati[w] = a[i];
      w++;
    }
  }
  
  return senza_duplicati;
}