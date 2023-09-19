#include<stdio.h> 

int main(void){

    char name[30];
    char surname[30];

    printf("Type your name: ");
    scanf("%s", name);

    printf("Type your surname: ");
    scanf("%s", surname);

    printf("Hello %s %s\n", name, surname);

}