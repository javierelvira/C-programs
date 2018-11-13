#include <stdio.h>
#include <stdlib.h>

//ARBOL GRAMATICAL
//TODOS LOS OPERADORES TIENEN VALOR DE RETORNO
//LOS OPERADORES TIENEN PRIORIDAD

int main(){
int a;
int b;    

    b=2*(a=3+5);
    printf("El valor de a es %i y el valor de b es %i\n", a, b);    

     return EXIT_SUCCESS;
}
