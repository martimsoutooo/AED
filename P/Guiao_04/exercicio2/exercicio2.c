#include <stdio.h>
#include <assert.h>

size_t operacoes;

int check_property(float lista[], int tamanho_lista) {

    assert(tamanho_lista > 2);

    operacoes++;
    float r = lista[1] / lista[0];

    for (int i = 2; i < tamanho_lista; i++) { 
        operacoes++;
        if (lista[i] != (r * lista[i - 1])) {
            return 0;
        }
    }

    return 1;
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
        operacoes = 0;
        int r = check_property(arrays[i], 10);
        printf("Array %d: %d, Operacoes: %ld\n", i + 1, r, operacoes);
    }

    return 0;
}

