#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define veces 1000
#define DELAY1 100000

int main(){

    int duracion[1000] = {0,2,8,2,8,1,2,2,1,4,2,2,1,1};
	
    for(int i=0 ; i<veces; i++) {

    fputc('\a',stderr);
    usleep(duracion [i] *DELAY1);

}

     return EXIT_SUCCESS;
}
