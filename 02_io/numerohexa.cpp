
#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;

    printf("Dime un número: ");
    scanf("%i", &numero);
    printf("Tú número en hexadecimal es: 0x%X\n", numero);

    return EXIT_SUCCESS;
}
