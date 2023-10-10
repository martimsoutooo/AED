#include <stdio.h>
#include <math.h>

int main() {
    int operacoes = 0;

    for (int num = 100; num <= 999; num++) {
        int numero = num;
        int soma_potencias = 0;
        int n = 3;

        while (numero > 0) {
            int digito = numero % 10;
            soma_potencias += pow(digito, n);
            numero /= 10;
            operacoes++; 
        }

        if (soma_potencias == num) {
            printf("%d\n", num);
        }
    }

    printf("Número de operações: %d\n", operacoes);

    return 0;
}
