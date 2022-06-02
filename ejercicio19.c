#include <stdio.h>
#include <stdlib.h>
//Escribir un programa que convierta una palabra a todas letras min ́ısculas. Ingresar la palabra como argumento.
int main(int argc, char const *argv[]) {
  char *min[] ={
    "a",
    "b",
    "c",
    "d",
    "e",
    "f",
    "g",
    "h",
    "i",
    "j",
    "k",
    "l",
    "m",
    "n",
    "o",
    "p",
    "q",
    "r",
    "s",
    "t",
    "u",
    "v",
    "w",
    "x",
    "y",
    "z"
  };
  int i = 1;
  int j = 0;
  while (i < argc) {
    while (argv[1][j] != 0) {
      printf("%s", min[argv[1][j]-'A']);
      j++;
    } j++;
    i++;
    printf(" ");
  } printf("\n");
  return 0;
}
