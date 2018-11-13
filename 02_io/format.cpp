#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("%c", 97);
    printf("%c", 0x61);
    printf("%c", 'a');

    printf("%i", 97);

    int numero;
    printf("\nNum: ");
    scanf("%i", &numero);
    printf("Numero => [%p]: %i\n", &numero, numero);
    printf("Linea %i\n", 47);

    int dia, annio;
    printf("Nacimiento: ");
    scanf(" %i/%*i/%i", &dia, &annio); // Carácter de supresión de asignación

     return EXIT_SUCCESS;
}
