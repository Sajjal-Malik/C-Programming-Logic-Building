#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool isPallindrome(char string[]){
    int middle = strlen(string) / 2;
    int len = strlen(string);
    for(int i = 0; i < middle; i++){
        if(string[i] != string[len - i - 1]){
            return false;
        }
    }
    return true;
}

int main(){

    char string[] = "abbcbba";

    if(isPallindrome(string)){
        printf("Current string is a Pallindrome\n");
    }
    else{
        printf("Current string is not a Pallindrome\n");
    }

    return 0;
}