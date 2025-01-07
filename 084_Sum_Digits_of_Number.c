#include<stdio.h>

int main(){

    int number = 0;
    int sum = 0;
    int digit = 0;

    printf("Enter numeber: ");
    scanf("%d", &number);

    while (number != 0){
        digit = number % 10;
        sum += digit;

        number = number / 10;
    }

    printf("Sum: %d", sum);

    return 0;
}