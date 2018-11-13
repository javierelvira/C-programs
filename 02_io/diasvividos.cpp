#include <stdio.h>
#include <stdlib.h>

int main(){

    /*	
    int dia, mes, annio;
    printf("¿Qué día naciste? (dd/mm/aaaa):");
    scanf("%i/%i/%i", &dia, &mes, &annio);
    */
    
    int dias, edad;
    printf("Dime tu edad:" );
    scanf("%i", &edad);

    dias= edad*365;
    printf("Has vivido %i días\n", dias);

     return EXIT_SUCCESS;
}
