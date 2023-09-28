#include <stdio.h>
#include <stdlib.h>

double* ReadArray(size_t* size_p) {
    // Ensure pre-condition: size_p is not NULL
    if (size_p == NULL) {
        return NULL;
    }

    // Read the number of elements
    size_t num_elements;
    printf("Enter the number of elements: ");
    scanf("%zu", &num_elements);

    // Check if the number of elements is greater than zero
    if (num_elements <= 0) {
        *size_p = 0;  // Set size to zero as per the condition
        return NULL;
    }

    // Allocate memory for the array
    double* array = (double*)malloc(num_elements * sizeof(double));

    // Check if memory allocation fails
    if (array == NULL) {
        *size_p = 0;  // Set size to zero as per the condition
        return NULL;
    }

    // Read the elements
    printf("Enter the elements:\n");
    for (size_t i = 0; i < num_elements; i++) {
        scanf("%lf", &array[i]);
    }

    *size_p = num_elements;  // Update the size

    return array;
}


