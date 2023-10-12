#include <stdio.h>
#include <assert.h>

int check_property(float lista[], int tamanho_lista) {
    assert(tamanho_lista > 2);
    int comparações = 0;
    int counter = 0;
    for (int i = 2; i < tamanho_lista; i++) {
        for (int j = 1; j < i; j++) {
            for (int w = 0; w < j; w++) {
                comparações++;
                if (lista[i] == lista[j] + lista[w]) {
                    counter += 1;
                }
            }
        }
    }
    printf("Comparações: %d", comparações);
    return counter;
}

int main() {
    float arrays[][10] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {1, 2, 4, 4, 5, 6, 7, 8, 9, 10},
        {1, 2, 4, 8, 5, 6, 7, 8, 9, 10},
        {1, 2, 4, 8, 16, 6, 7, 8, 9, 10},
        {1, 2, 4, 8, 16, 32, 7, 8, 9, 10},
        {1, 2, 4, 8, 16, 32, 64, 8, 9, 10},
        {1, 2, 4, 8, 16, 32, 64, 128, 9, 10},
        {1, 2, 4, 8, 16, 32, 64, 128, 256, 10},
        {1, 2, 4, 8, 16, 32, 64, 128, 256, 512}
    };

    for (int i = 0; i < 9; i++) {
        int r = check_property(arrays[i], 10);
        printf("   Array %d: %d\n", i + 1, r);
    }

    return 0;
}
