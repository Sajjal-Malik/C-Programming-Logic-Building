#include<stdio.h>

int sumOfArray(int array[], int length){
    int sum = 0;
    for(int i = 0; i < length; i++){
        sum += array[i];
    }
    return sum;
}

int main(){

    int myArray[] = {1,2,3,4,5,5,6};
    int length = sizeof(myArray) / sizeof(myArray[0]);

    int sum = sumOfArray(myArray, length);

    printf("sum of myArray is -> %d\n", sum);

    return 0;
}