#include<stdio.h>
#include<stdlib.h>
#include "complex.h"
int main(){
    printf("Hello world! \n");
    printf("def complex 1,1\n");
    int x = 0;
    complexNum* a =(complexNum*) malloc(sizeof(complexNum));
    a -> real = 0.0;
    free(a);
}