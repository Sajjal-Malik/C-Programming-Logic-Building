#include<stdio.h>
#include<string.h>

int string_length(char *string){
    int length = 0;

    while(string[length] != '\0'){
        length++;
    }
    return length;
}

int main(){

    char *string = "String to count its length";
    int length = strlen(string);
    printf("String length is: %d\n", length);

    int our_length = string_length(string);
    printf("String length is: %d", length);


    return 0;
}