#include<stdio.h>
#include<math.h>

double distanza(double x1, double y1, double x2, double y2) {
  double x_difference_squared = pow(x1 - x2, 2);
  double y_difference_squared = pow(y1 - y2, 2);
  double sum = x_difference_squared + y_difference_squared;
  double sqrt_of_sum = sqrt(sum);
  return sqrt_of_sum;
}

double potenza(double x, double y) {
  int risultato = 1;
  for (int i = risultato; i <= y; i++) {
    risultato = risultato * x;
  }
  return risultato;
}

void main() {
  double x1, x2, y1, y2;
  printf("Punto p1: \n");
  printf("x1: ");
  scanf("%lf", &x1);
  printf("y1: ");
  scanf("%lf", &y1);
  printf("Punto p2: \n");
  printf("x2: ");
  scanf("%lf", &x2);
  printf("y2: ");
  scanf("%lf", &y2);

  printf("La distanza fra p1 (%lf, %lf) e p2 (%lf, %lf) è: %lf", x1, y1, x2, y2, distanza(x1, y1, x2, y2));
}