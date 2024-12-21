#include<stdio.h>
#include<string.h>
#include<ctype.h>

void letter_flip(char *str){
    int length = strlen(str);

    for(int i = 0; i < length; i++){
        if(isupper(str[i])){
            str[i] = tolower(str[i]);
        }
        else if(islower(str[i])){
            str[i] = toupper(str[i]);
        }
    }
    printf("%s\n", str);
}

int main(){

    char str[] = {"abcdefABCDEF"};
    printf("Before flipping the Chars: %s\n", str);

    printf("After flipping the Chars: ");
    letter_flip(str);

    return 0;
}