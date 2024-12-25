#include<stdio.h>
#include<stdbool.h>

bool is_disjoint(int a1[], int l1, int a2[], int l2){

    for(int i = 0; i < l1; i++){

        for(int j = 0; j < l2; j++){

            if(a1[i] == a2[j]){
                return false;
            }
        }
    }
    return true;
}

int main(){

    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 10};
    int lengtharr1 = sizeof(arr1)/sizeof(arr1[0]);
    int lengtharr2 = sizeof(arr2)/sizeof(arr2[0]);


    if(is_disjoint(arr1, lengtharr1, arr2, lengtharr2)){
        printf("Arrays are disjoint.\n");
    }
    else{
        printf("Arrays are not disjoint.\n");
    }

    return 0;
}