#include<stdio.h>
#include<stdlib.h>
#include "complex.h"
int main(){
    printf("Hello world! \n");
    printf("def complex 1,1\n");
    complexNum* a = new_complex_num(1.0,2.0);
    printf("%f|",*get_real(a));
    printf("%f\n",*get_complex(a));
    destory_complexNum(a);
}