#include<stdio.h>

//    A1   
//   AB12
//  ABC123
// ABCD1234


int main(){

    int i, j, k;

    for(i = 1; i <= 4; i++){

        k = 'A';

        for(j = 1; j <= 8; j++){

            if(j >= 5 - i && j <= 4 + i){
                if(j == 5)
                    k = '1';

                printf("%c",k);
                k++;
            }
            else{
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}