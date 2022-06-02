#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Escribir un programa que imprima tres strings representando una mano de truco aleatoria, por ejemplo: “Cuatro de copas”, “Ancho de espada”, “Tres de basto”.
int main(int argc, char const *argv[]) {
  char *palos[] = {"Espada","Basto","Oro","Copa"};
  char *numeros[] ={
    "Ancho",
    "Dos",
    "Tres",
    "Cuatro",
    "Cinco",
    "Seis",
    "Siete",
    "Sota",
    "Caballo",
    "Rey"
  };
  char mazo[40][50]; //50  es el largo de la carta
  for (int i = 0; i < 40; i++) {
    char carta[50] = "";
    strcat(carta, numeros[i % 10]);
    strcat(carta, " de ");
    strcat(carta, palos[i/10]);
    strcpy(mazo[i], carta);
    printf("%d %s\n", i+1, mazo[i]);
  }
  //mazo[0] = strcat(palos[0], numeros[0]);
  return 0;
}
