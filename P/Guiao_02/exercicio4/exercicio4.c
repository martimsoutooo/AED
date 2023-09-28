#include <stdio.h>
#include <stdlib.h> // Added stdlib.h header file

void DisplayArray(double* a, size_t n);
double* ReadArray(size_t* size_p);
double* Append(double* array_1, size_t size_1, double* array_2, size_t size_2);

int main(void){
    double* array1;
    double* array2;
    double* array3;
    size_t size1;
    size_t size2;
    size_t size3;

    array1 = ReadArray(&size1);
    array2 = ReadArray(&size2);

    array3 = Append(array1, size1, array2, size2);
    size3 = size1 + size2;

    DisplayArray(array3, size3);

    free(array1); // Added free function call
    free(array2);
    free(array3);

    return 0;
}