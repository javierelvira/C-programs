#include <stdio.h>
#include <stdlib.h>

int main(){
    int edad;
	
    printf("Dime tu edad: ");
    scanf(" %d", &edad);
    printf("Tú edad es de %d años\n", edad); 

    return EXIT_SUCCESS;
}
