#include <stdio.h>
// legge da tastiera un numero, dice se e'positivo o negativo e stampa il valore assoluto
void main() {
  float absoluteValue;
  printf("Inserisci un numero:");
  scanf("%f", &absoluteValue);

  if (absoluteValue >= 0)
    printf("Il numero è positivo e il suo valore assoluto è: %f\n", absoluteValue);
  else
    printf("Il numero è negativo e il suo valore assoluto è: %f\n", -absoluteValue);
}