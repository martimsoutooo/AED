#include <stdio.h>

void DisplayPol(double* coef, size_t degree){
    for (size_t i = 0; i < degree; i++){
        printf("%lf ", coef[i]);
    }
    printf("\n");
}

double ComputePol(double* coef, size_t degree, double x){
    double result = 0;
    for (size_t i = 0; i < degree; i++){
        result += coef[i] * x;
        x *= x;
    }
    return result;
}

int main(){
    double coef[] = {1, 4, 1};
    size_t degree = sizeof(coef) / sizeof(double);
    double x = 2;
    DisplayPol(coef, degree);
    printf("%lf\n", ComputePol(coef, degree, x));
    return 0;
}
