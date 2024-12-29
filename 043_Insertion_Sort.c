#include<stdio.h>

void Insertion_Sort(int array[], int length){
    
    for(int i =0; i < length; i++){
        int key = array[i];
        int j = i - 1;

        while(j >= 0 && array[j] > key){
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
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
    Insertion_Sort(array, length);

    printf("Sorted array -> ");
    for(int i = 0; i < length; i++){
        printf("%d ", array[i]);
    }


    return 0;
}