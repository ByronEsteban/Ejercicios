#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Escribir un programa que use el mazo de cartas del ejercicio anterior para repartir tres cartas. Mezclar el mazo antes de repartir. Imprimir una cantidad n de manos donde n es un argumento del programa.
int main(int argc, char const *argv[]) {
  //int n = atoi(argv[1]);
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
  }
  for (int i = 0; i < 200; i++) {
    int r = rand()%40;
    int s = rand()%40;
    char temp[50] = "";
    strcpy(temp,mazo[r]);
    strcpy(mazo[r], mazo[s]);
    strcpy(mazo[s], temp);
  }
  for (int i = 0; i < 40; i++) {
    printf("%s\n", mazo[i]);
  }
  //for (int i = 0; i < n; i++) {
  //  int r = rand()%41;
  //  printf("%s\n", mazo[r]);
  //}
  //mazo[0] = strcat(palos[0], numeros[0]);
  return 0;
}
