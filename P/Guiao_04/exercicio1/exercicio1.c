#include <stdio.h>
#include <assert.h>

int check_property(int lista[], int tamanho_lista) {
    assert(tamanho_lista > 2); // Ensure the input array has at least 3 elements.

    int comparações = 0;
    int counter = 0;
    
    for (int i = 1; i < tamanho_lista - 1; i++) {
        comparações++;
        if (lista[i] == lista[i - 1] + lista[i + 1]) {
            counter += 1;
        }
    }
    printf("Comparações: %d\n" ,comparações);
    
    return counter;
}

int main() {
    int array1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[] = {1, 2, 1, 4, 5, 6, 7, 8, 9, 10};
    int array3[] = {1, 2, 1, 3, 2, 6, 7, 8, 9, 10};
    int array4[] = {0, 2, 2, 0, 3, 3, 0, 4, 4, 0};
    int array5[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    printf("Array 1: %d\n", check_property(array1, 10));
    printf("Array 2: %d\n", check_property(array2, 10));
    printf("Array 3: %d\n", check_property(array3, 10));
    printf("Array 4: %d\n", check_property(array4, 10));
    printf("Array 5: %d\n", check_property(array5, 10));

    return 0;
}
