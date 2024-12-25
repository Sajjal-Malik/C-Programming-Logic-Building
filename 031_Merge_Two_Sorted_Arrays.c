#include<stdio.h>

void merge(int a[], int m, int b[], int n, int r[]){
    int i = 0, j = 0, k = 0;

    while(i < m && j < n){
        if(a[i] < b[j]){
            r[k] = a[i];
            k++;
            i++;
        }
        else{
            r[k] = b[j];
            k++;
            b++;
        }
    }
    while(i < m){
            r[k] = a[i];
            k++;
            i++;
    }
    while(j < n){
            r[k] = b[j];
            k++;
            j++;
    }
}

int main(){

    
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 10};
    int lengthofarr1 = sizeof(arr1)/sizeof(arr1[0]);
    int lengthofarr2 = sizeof(arr2)/sizeof(arr2[0]);

    int result[lengthofarr1 + lengthofarr2];
    merge(arr1, lengthofarr1, arr2, lengthofarr2, result);

     for(int i = 0; i < lengthofarr1 + lengthofarr2; i++){
        printf("%d ", result[i]);    
    }
    printf("\n");

    return 0;
}