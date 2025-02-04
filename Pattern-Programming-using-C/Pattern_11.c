#include<stdio.h>

// *    
// **
// ***
// ****
// *****
// *****
// ****
// ***
// **
// *


int main(){

    int i, j, k = 0;
    int rows, n;
    printf("Enter the number of rows -> ");
    scanf("%d", &rows);
    n = (rows + 1) / 2;

    for(i = 1; i <= rows; i++){

        if(rows % 2 == 0){
            if(i <= rows / 2)
                k++;
            if(i > rows / 2 + 1)
                k--;
        }   
        else{
            i <= n ? k++ : k--;  // single line if else
        }


        for(j = 1; j <= n; j++){

            if(j <= k){
                printf("*"); 
            }
            else{
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}