#include<stdio.h>

void reverseArray(int array[], int length){

    int temp = 0;
    for(int i = 0; i < (length / 2); i++){
        temp = array[i];
        array[i] = array[length - i - 1];
        array[length - i - 1] = temp;
    }
}

int main(){

    int myArray[] = {0,1,2,3,4,5,6,7};
    int length = sizeof(myArray) / sizeof(myArray[0]);

    printf("Original Array -> ");
     for(int i = 0; i < length; i++){
        // printf("myArray[%d] = %d\n",i, myArray[i]);
        printf("%d ",myArray[i]);
    }

    printf("\n");

    reverseArray(myArray, length);

    printf("Reversed Array -> ");
    for(int i = 0; i < length; i++){
        // printf("myArray[%d] = %d\n",i, myArray[i]);
        printf("%d ",myArray[i]);
    }


    return 0;
}