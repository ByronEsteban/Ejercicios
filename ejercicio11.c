#include <stdio.h>
#include <stdlib.h>
//Escribir un programa que reciba un string como argumento y cuente la cantidad de car ́acteres en la palabra.

int main(int argc, char const *argv[]) {
  //char *min[];
  int i = 0;
  while (argv[1][i] != 0) {
    i++;
  }
  printf("La palabra tiene %d letras\n", i);
  return 0;
}
