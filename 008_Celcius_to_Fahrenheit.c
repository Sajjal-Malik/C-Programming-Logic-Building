#include<stdio.h>

int main(){

    double C;
    printf("Enter the Celcius Temperature value: ");
    scanf("%lf",&C);

    double F = (C * 1.8) + 32;

    printf("C %.2f -> F is: %.2f\n", C, F);

    return 0;
}