#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  int d = atoi(argv[4]);
  int e = atoi(argv[5]);
  srand(time(NULL));
  int r = rand()%(25);
  if (a == r || b == r || c == r || d == r || e == r) {
    printf("Ganaste!!! El número era %d\n", r);
  } else printf("Perdiste :( El número era %d\n", r);
  return 0;
}
