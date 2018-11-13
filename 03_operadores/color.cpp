#include <stdio.h>
#include <stdlib.h>

int main(){

   bool r = true,
        y = false,
        b = true;

//  if(a == 2)
  //    printf("a vale 2.\n");
 // else
   //   printf("a vale distinto de 2.\n");

   if (r == true)
       puts("El color es rojo");
   else
       puts("El color no es rojo");

   if (y == false)
       puts("El color es amarillo");
   else
       puts("El color no es amarillo");

   if (b == true)
       puts("El color es azul");
   else
       puts("El color no es azul");

   if (b == true & r == true)
       puts("El color es morado");
   else
       puts("El color no es morado");

   if (b == true & y == false)
       puts("El color es verde");
   else
       puts("El color no es verde");

   if (r == true & y == false)
       puts("El color es naranja");
   else
       puts("El color no es naranja");

   if (r == true & y == false & b == true)
       puts("El color es blanco");
   else
       puts("El color no es blanco");

   if (r == false & y == true & b == false)
       puts("El color no es negro");
   else
       puts("El color es negro");

     return EXIT_SUCCESS;
}














