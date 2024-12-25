#include<stdio.h>

void rotate_left_once(int array[], int length){

    int temp = array[0];
    for(int i = 0; i < (length - 1); i++){
        array[i] = array[i + 1];
    }
    array[length - 1] = temp;
}

void rotate_left(int array[], int length, int n){

    for(int i = 0; i < n; i++){
        rotate_left_once(array, length);
    }
}

int main(){

    int arr1[] = {1, 3, 5, 7, 9};
    int length = sizeof(arr1)/sizeof(arr1[0]);

    for(int i = 0; i < length; i++){
        printf("%d ", arr1[i]);    
    }
    printf("\n");

    // rotate_left_once(arr1, length);
    rotate_left(arr1, length, 3);

    for(int i = 0; i < length; i++){
        printf("%d ", arr1[i]);
    }
    printf("\n");

    return 0;
}