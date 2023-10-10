#include <stdio.h>

#define MAX 1000000

int fatorial(int n) {
    if (n <= 1) {
        return 1;
    }
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int fatoriais[10];
    for (int i = 0; i < 10; i++) {
        fatoriais[i] = fatorial(i);
    }

    for (int num = 1; num <= MAX; num++) {
        int numero = num;
        int soma_fatoriais = 0;

        while (numero > 0) {
            int digito = numero % 10;
            soma_fatoriais += fatoriais[digito];
            numero /= 10;
        }

        if (soma_fatoriais == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}





