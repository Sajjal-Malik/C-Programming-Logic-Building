#include<stdio.h>

void vector_add(float v1[], float v2[], float result[], int length){
    
    for(int i = 0; i < length; i++){
        result[i] = v1[i] + v2[i];
    }
}

int main(){

    float vector1[] = {1,2,3};
    float vector2[] = {4,5,6};
    float result[] = {0, 0, 0};
    int length = sizeof(result) / sizeof(result[0]);

    vector_add(vector1, vector2, result, length);

    for(int i = 0; i < length; i++){
        printf("reuslt[%d] = %.2f\n", i, result[i]);
    }

    return 0;
}