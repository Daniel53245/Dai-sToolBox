#include <stdlib.h>
#include <iostream>
#include "sorting.hpp"
int main(){
        int test[] = {1,4,5,2,6};
        bubble_sort(test,5);
        print_array(test,5);
}

void print_array(int input[],int length){
        for(int i = 0;i< length;i++){
                printf("%i ",input[i]);
        }
        printf("\n");
}

void bubble_sort(int input[],int length){
        for(int i = 0;i<length;i++){
                for(int j = 0; j < length-i-1;j++){
                        if(input[j] > input[j+1]){
                                int temp = input[j+1];
                                input[j+1] = input[j];
                                input[j] = temp;
                        }
                }
        }
}
