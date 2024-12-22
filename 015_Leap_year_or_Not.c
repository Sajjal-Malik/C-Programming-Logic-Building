#include<stdio.h>
#include<stdbool.h>

bool is_leap_year(int year){

    if (year % 4 != 0)
        return false;
    else if(year % 100 != 0)
        return true;
    else if(year % 400 != 0)
        return false;
}

int main(){

    int year;
    printf("Enter year upto which you want to check: ");
    scanf("%d",&year);

    for(int i = 1950; i <= year; i++){
        if(is_leap_year(i))
            printf("%d It's is LEAP year\n", i);
        else
            printf("%d It's not a leap year\n", i);
    }

    return 0;
}