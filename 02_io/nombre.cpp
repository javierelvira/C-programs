#include <stdio.h>
#include <stdlib.h>

int main(){
    char nombre[32];
    char nombre2[32];	
// se podría poner también char nombre[32], nombre2[32];

    system("toilet -fpagga --gay hola");
    printf("Dime tu nombre: ");
    scanf(" %s y 23 %s", nombre, nombre2);
    printf("Hola, %s y %s\n", nombre, nombre2); 

    return EXIT_SUCCESS;
}
