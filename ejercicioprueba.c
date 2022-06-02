#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  int m = atoi(argv[2]);
  int max = INT_MIN;
  int min = INT_MAX;
  double prom = 0;
  int a[n];
  srand(time(NULL));
  for (int i = 0; i < n; i++) {
    a[i]= rand()%(m+1);
    if (a[i] > max) {
      max = a[i];
    } else if (a[i] < min) {
      min = a[i];
    }
    prom = a[i] + prom;
  } for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  prom = prom / n;
  printf("\nEl máximo es: %d\nEl mínimo es: %d\nEl promedio es %.2f\n", max, min, prom);
  return 0;
}
