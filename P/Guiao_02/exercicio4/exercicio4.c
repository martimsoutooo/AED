#include <stdio.h>

void DisplayArray(double* a, size_t n);

int main() {
    double array[] = {1.0, 2.5, 3.7, 4.2, 5.9};
    size_t size = sizeof(array) / sizeof(array[0]);

    DisplayArray(array, size);

    return 0;
}

void DisplayArray(double* a, size_t n) {
    printf("Array = [");
    for (size_t i = 0; i < n; i++) {
        if (i == n - 1)
            printf("%lf]", a[i]);
        else
            printf("%lf, ", a[i]);
    }
    printf("\n");
}

double* ReadArray(size_t* size_p){
    array = malloc(size_p * sizeof(void));

   
}

