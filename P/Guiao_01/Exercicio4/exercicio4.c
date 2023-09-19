#include <stdio.h>
#include <math.h>

int main(void) {
    int l;

    printf("How many lines do you want in your table? - ");
    scanf("%d", &l);

    printf("Number | Square | Sqrt\n");

    for (double i = 1; i <= l; i++) {
        printf("%lf      | %lf      | %lf\n", i, (i * i), sqrt(i));
    }
    
    return 0;
}


