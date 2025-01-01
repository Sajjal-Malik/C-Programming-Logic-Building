#include<stdio.h>

int main(){

    // 1D Array 
    int array[] = {
        #include "array.txt"
    };

    for(int i = 0; i < 10; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }

    // 2D Array 
    int array2D[2][5] = {
        #include "array.txt"
    };

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 5; j++)        
            printf("array[%d][%d] = %d\n", i,j, array2D[i][j]);



    return 0;
}