#include<stdio.h>

int findOccurence(int array[], int length, int valueToFind){

    int count = 0;
    for(int i = 0; i < length; i++){
        if(array[i] == valueToFind) count++;
    }
    return count;
}

int main(){

    int myArray[] = {2,3,4,9,10,11,12,5,7,9,1,2,3,2};
    int valueToFind = 2;
    int length = sizeof(myArray) / sizeof(myArray[0]);
    int result = findOccurence(myArray, 14, valueToFind);
    printf("Occurence of %d -> %d \n", valueToFind, result);
    

    return 0;
}