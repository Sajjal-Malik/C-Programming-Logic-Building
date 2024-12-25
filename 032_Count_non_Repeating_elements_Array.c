#include<stdio.h>

int non_repeating(int array[], int length){
    int i = 0, j = 0, count = 0;

    for(i = 0; i < length; i++){

        for(j = 0; j < length; j++){
            if(array[i] == array[j] && i != j)
                break;
            if(j == length)
                count++;
        }
    }
    return count;
}

int main(){

    int arr[] = {1, 3, 5, 7, 9, 3, 8, 4, 5, 1, 3, 7};
    int length = sizeof(arr)/sizeof(arr[0]);

    int count = non_repeating(arr, length);
    printf("%d\n", count);

    return 0;
}