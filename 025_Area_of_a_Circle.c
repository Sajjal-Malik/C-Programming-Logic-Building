#include<stdio.h>

int main(){

    double radius = 0;
    printf("Enter radius: ");
    scanf("%lf",&radius);

    double area = 3.141529 * radius * radius;
    printf("Area: %lf", area);

    return 0;
}