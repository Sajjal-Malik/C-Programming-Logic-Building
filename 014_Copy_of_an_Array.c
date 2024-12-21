#include<stdio.h>
#include<stdlib.h>

int* array_copy(int *array, int length){

    int *c = malloc(length * sizeof(int));
    for(int i = 0; i < length; i++){
        c[i] = array[i];
    }
    return c;
}

int main(){

    // int a[] = {1,2,3,4,5};
    // // int *b;
    // b = a;
    // a[0] = 10;

    // printf("b[0] = %d\n", b[0]);
    // printf("b: %p, a: %p\n", b, a);

    // int a[5] = {1,2,3,4,5};
    // int copy[5];

    // // copying the element of array a[] -> copy[]
    // for(int i = 0; i < 5; i++){
    //     copy[i] = a[i];
    // }

    // for(int i = 0; i < 5; i++){
    //     printf("copy [%d] = %d\n", i, copy[i]);
    // }

    int arr[5] = {1,2,3,4,5};
    int *arr_copy = array_copy(arr, 5);

    for(int i = 0; i < 5; i++){
        printf("arr_copy[%d] = %d\n", i, arr_copy[i]);
    }

    return 0;
}