#include <stdio.h>
#include <math.h>

int main(void) {
    int start, finish, l;

    printf("Por que ângulo queres começar? - ");
    scanf("%d", &start);

    printf("Por que ângulo queres acabar? - ");
    scanf("%d", &finish);

    printf("Qual o espaçamento entre ângulos? - ");
    scanf("%d", &l);

    printf("Angle | Sin(Angle) | Cos(Angle)\n");

    int i = start;

    for (i ; i <= finish; i += l) {
        double graus = i * M_PI / 180;
        printf("%d      | %lf      | %lf\n", i, sin(graus), cos(graus));
    }
    
    return 0;
}
