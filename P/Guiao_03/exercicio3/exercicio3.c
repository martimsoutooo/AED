#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stblib.h>

int factorion(){
        int factorial[10];
        for (int j = 0; j<= 9; j++){
            factorial[j] = factorial(j);
        }

        for(int i = 0; i <= 1000000; i++){
            int factorial_sum = 0;
            
        
            char i_string[8];

            sprintf(i_string, "%d", i);

            for (int n; n <= strlength(i_string); n++){
            int digit = i_string[n] - '0';
            factorial_sum += factorial[digit];

            }

            if (factorial_sum == i){
            printf("%d\n", i);
            }
        
        }
}

