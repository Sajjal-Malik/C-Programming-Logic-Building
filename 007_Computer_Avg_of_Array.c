#include<stdio.h>

double averageOfArray(double array[], int length){
    double sum = 0;
    double average = 0;

    for(int i = 0; i < length; i++){
        sum += array[i];
    }
    average = sum / length;

    return average;
}

int main(){

    double array[] = {5.6,3.4,5.6,2.3,1.2,8.9,7.8};
    int length = sizeof(array) / sizeof(array[0]);

    double average = averageOfArray(array, length);

    printf("Average of this array is -> %.2f\n", average);

    return 0;
}