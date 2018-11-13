#include <stdio.h>
#include <stdlib.h>

int main(){
    char apellido1[32];
    char apellido2[32];
    char nombre[32];

    printf("Dime tu nombre: ");
    scanf("%s", nombre);
    printf("Dime tus apellidos: ");
    scanf("%s %s", apellido1, apellido2);
    printf("Hola %s %s %s \n", nombre, apellido1, apellido2); 

    return EXIT_SUCCESS;
}
