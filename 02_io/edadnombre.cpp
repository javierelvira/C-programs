#include <stdio.h>
#include <stdlib.h>

int main(){
    char nombre[32];
    int edad;

    printf("nombre = edad\n"
           ":" );
   scanf(" %s = %i", nombre, &edad);
   
   printf("Con %i años y 90kg de peso: %s Fernandez\n", edad, nombre); 

    return EXIT_SUCCESS;
}
