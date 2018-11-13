#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define DELAY1 200000
#define DELAY2 700000
#define DELAY3 1000000

int main(){
    
    usleep(DELAY2);
    printf("*\a\n");
    usleep(DELAY2);
    printf("*\a\n");
    usleep(DELAY3);
    printf("*\a\n");
    usleep(DELAY2);
    printf("*\a\n");
    usleep(DELAY2);
    printf("*\a\n");
    usleep(DELAY3);
    printf("*\a\n");
    usleep(DELAY2);
    printf("*\a\n");
    usleep(DELAY2);
    printf("*\a\n");
    usleep(DELAY3);
    printf("*\a\n");
    usleep(DELAY2);
    printf("*\a\n");
    usleep(DELAY2);
    printf("*\a\n");
    usleep(DELAY3);
    printf("*\a\n");   
    usleep(DELAY1);
    printf("*\a\n"); 
    usleep(DELAY1);
    printf("*\a\n"); 
    usleep(DELAY1);
    printf("*\a\n");
   
    return EXIT_SUCCESS;
}
