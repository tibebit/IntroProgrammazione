#include<stdio.h>

int min_fra_due(int x, int y) {
  if (x > y) {
    return y;
  } else {
    return x;
  }
}


int min_fra_tre(int x, int y, int z) {
  int minimo = min_fra_due(x,y);
  minimo = min_fra_due(minimo, z);
}


int max(int x, int y) {
  if (x > y) {
    return x;
  } else {
    return y;
  }
}


void main() {
int x, y, z;  
  printf("Inserisci x: ");
  scanf("%d", &x);
  printf("Inserisci y: ");
  scanf("%d", &y);
  printf("Inserisci z: ");
  scanf("%d", &z);

  int minimo = min_fra_tre(x, y, z);

  printf("Il minimo tra x, y, z è: %d\n", minimo);

  printf("\n...Definisco w appartenente a [1, max{x,y}]...\n");
  int wMin = 1;
  int wMax = max(x,y);
  
  for (int i = wMin; i <= wMax; i++) {
    printf("Tripletta(%d, %d, %d) è: %d\n", x, y, i,  min_fra_tre(x, y, i));
  }

}