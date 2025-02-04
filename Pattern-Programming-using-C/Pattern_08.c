#include<stdio.h>

//    1   
//   121
//  12321
// 1234321

int main(){

    int i, j, k;

    for(int i = 1; i <= 4; i++){

        k = 1;

        for(int j = 1; j <= 7; j++){

            if(j >= 5 - i && j <= 3 + i){
                printf("%d",k);
                // Ternary Operator ( (condition) ? (variable = Expression2) : (variable = Expression3); ) 
                j < 4 ? k++ : k--; 
            }
            else{
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}