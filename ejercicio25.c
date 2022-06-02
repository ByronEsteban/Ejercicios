#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Escribir un programa que calcule la traza de una matriz cuadrada. La traza es la suma de los elementos de la diagonal principal.
int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  int sum = 0;
  int a[n][n];
  srand(time(NULL));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      a[i][j] = rand()%11;
      printf("%d ", a[i][j]);
      if (i==j) {
        sum = sum + a[i][j];
      }
    } printf("\n");
  } printf("La suma es %d\n", sum);
  return 0;
}
