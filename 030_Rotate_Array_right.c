#include<stdio.h>

void rotate_right_once(int array[], int length){

    int temp = array[length - 1];
    for(int i = (length - 2); i >= 0 ; i--){
        array[i + 1] = array[i];
    }
    array[0] = temp;
}

void rotate_right(int array[], int length, int n){

    for(int i = 0; i < n; i++){
        rotate_right_once(array, length);
    }
}

int main(){

    int arr1[] = {1, 3, 5, 7, 9};
    int length = sizeof(arr1)/sizeof(arr1[0]);

    for(int i = 0; i < length; i++){
        printf("%d ", arr1[i]);    
    }
    printf("\n");

    rotate_right_once(arr1, length);
    // rotate_right(arr1, length, 3);

    for(int i = 0; i < length; i++){
        printf("%d ", arr1[i]);
    }
    printf("\n");

    return 0;
}