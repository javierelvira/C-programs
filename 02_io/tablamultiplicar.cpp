#include <stdio.h>
#include <stdlib.h>
#define max 0x100

void pon_titulo(int  numero){
    char titulo[max];

    sprintf(titulo, "toilet -f pagga --metal Tabla del %i", numero);
    system(titulo);
}

int main(){
    int i, numero;

    printf("\n Introduzca el número de la tabla de multiplicar que quieras: ");
    scanf("%d", &numero);
    
    pon_titulo(numero);
    
    for (i = 1; i <=10; i++)
	    printf("\n%d*%d=%d\n", i, numero, i * numero);

     return EXIT_SUCCESS;
}
