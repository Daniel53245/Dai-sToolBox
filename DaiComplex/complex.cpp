#include "complex.h"
using namespace std;

typedef struct complexNum{
    float real;
    float complexNum;
} complexNum;

float* get_real(complexNum* complexNum){
    return (float*)complexNum;
}

float* get_complexNum(complexNum* complexNum){
    return ((float*)complexNum + 1);
}