#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

double* Append(double* array_1, size_t size_1, double* array_2, size_t size_2){

    double* array_3 = (double*)malloc((size_1+size_2)* sizeof(double));

    for(size_t i = 0; i < size_1; i++){
        array_3[i] = array_1[i];
    }

    for(size_t i = 0; i < size_2; i++){ 
        array_3[size_1+i] = array_2[i];
    }

    return array_3;
}
