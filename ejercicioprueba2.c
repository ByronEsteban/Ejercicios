#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main(int argc, char const *argv[]) {
  srand(time(NULL));
  char *esc[] = {
    "Game of Thrones",
    "The Walking Dead",
    "Breaking Bad",
    "La Casa de Papel",
    "Vikingos"
  };
  char *val[] = {
    "buena",
    "mala",
    "excelente",
    "pésima",
    "normal"
  };
  char *por[] = {
    "sus personajes",
    "su historia",
    "su banda sonora",
    "sus efectos",
    "sus actores"
  };
  char a[5][100];
  for (int i = 0; i < 5; i++) {
    char b[100] = "";
    int r = rand()%5;
    strcat(b, esc[i]);
    strcat(b, " es una serie ");
    strcat(b, val[r]);
    strcat(b, " por ");
    strcat(b, por[r]);
    strcat(a[i], b);
    printf("%s\n", a[i]);
  }
  return 0;
}
