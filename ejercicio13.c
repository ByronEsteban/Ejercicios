#include <stdio.h>
#include <stdlib.h>
//Escribir un programa que reciba un argumento entero e imprima el mes del a ̃no correspondiente o un error si el argumento es menor a 1 o mayor a 12.
int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  char *mes[] ={
    "Enero",
    "Febrero",
    "Marzo",
    "Abril",
    "Mayo",
    "Junio",
    "Julio",
    "Agosto",
    "Septiembre",
    "Octubre",
    "Noviembre",
    "Diciembre"
  };
  if (n <= 0 || n >=13) {
    printf("ERROR\n");
    return 0;
  } else printf("El mes es: %s\n", mes[n-1]);
return 0;
}
