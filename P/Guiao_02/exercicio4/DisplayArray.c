#include <stdio.h>

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


