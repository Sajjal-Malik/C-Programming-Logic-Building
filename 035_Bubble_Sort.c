#include<stdio.h>

void Bubble_Sort(int array[], int length){

    for(int i = 0; i < length; i++){

        for(int j = 0; j < (length - 1 - i) ; j++){

            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }   
    }
}

int main(){

    int array[] = {4,6,7,8,3,2,9,1,10};
    int length = sizeof(array)/sizeof(array[0]);

    printf("Original array -> ");
    for(int i = 0; i < length; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    Bubble_Sort(array, length);

    printf("Sorted array -> ");
    for(int i = 0; i < length; i++){
        printf("%d ", array[i]);
    }

    return 0;
}