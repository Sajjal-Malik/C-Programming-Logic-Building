#include<stdio.h>

float dot_product(float v1[], float v2[], int length){
    float sum = 0;

    for(int i = 0; i < length; i++){
        sum = sum + (v1[i] * v2[i]);
    }
    return sum;
}

int main(){

    float vector1[] = {1,2,3};
    float vector2[] = {4,5,6};
    float result = dot_product(vector1, vector2, 3);

    printf("Result: %.2f\n", result);

    return 0;
}