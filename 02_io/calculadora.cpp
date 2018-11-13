#include <stdio.h>
#include <stdlib.h>

int main(){
    int resultado;	
    int a;
    int b;    
    int opcion;

    printf("Esto es una calculadora que te permitirá sumar(1), restar(2), multiplicar(3) o dividir(4) dos números.\n");
    printf("Indique el número de la operación que quieres utilizar: ");
    scanf("%i", &opcion);
    printf("Usted ha elegido %i\n", opcion);

    switch(opcion)
    {
	    case 1:
	    printf("\n -> Introduzca el primer número: ");
	    scanf("%i", &a);
	    printf("\n -> Introduzca el segundo número: ");
	    scanf("%i", &b);
	    resultado=a+b;
	    printf("\nLa suma de %i + %i es igual a %i\n", a, b, resultado);
	    break;

	    case 2:
	    printf("\n -> Introduzca el primer número: ");
  	    scanf("%i", &a);
	    printf("\n -> Introduzca el segundo número: ");	
	    scanf("%i", &b);
	    resultado=a-b;
	    printf("\nLa resta de %i a %i es igual a %i\n", b, a, resultado);
            break;

	    case 3:
	    printf("\n -> Introduzca el primer número: ");
	    scanf("%i", &a);
	    printf("\n -> Introduzca el segundo número: ");
	    scanf("%i", &b);
	    resultado=a*b;
	    printf("\nEl resultado de multiplicar %i por %i es igual a %i\n", a, b, resultado);
	    break;

	    case 4:
	    printf("\n -> Introduzca el primer número: ");
	    scanf("%i", &a);
	    printf("\n -> Introduzca el segundo número: ");
    	    scanf("%i", &b);
	    resultado=a/b;
	    printf("\nEl resultado de dividir %i entre %i es igual a %i\n", a, b, resultado);
	    break;
    }
	 
    return EXIT_SUCCESS;
}
