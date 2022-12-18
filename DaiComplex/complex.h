#ifndef complex
#define complex
    #include <stdlib.h>
    struct complexNum;
    float* get_real(complexNum* complexNum);
    float* get_complex(complexNum* complexNum);
    complexNum* new_complex_num(float real,float complexNum);
    void destory_complexNum(complexNum* ptr);
#endif
