#include "complex.h"
#include "stdlib.h"
using namespace std;

typedef struct complexNum{
    float real;
    float complexNum;
} complexNum;

float* get_real(complexNum* complexNum){
    return (float*)complexNum;
}

float* get_complex(complexNum* complexNum){
    return ((float*)complexNum + 1);
}

complexNum* new_complex_num(float real,float complexN){
    void* memory = malloc(2*sizeof(float));
    *(float*)memory = real;
    *((float*)memory +1) = complexN;
    return (complexNum*) memory;
}

void destory_complexNum(complexNum* ptr){
    free(ptr);
}