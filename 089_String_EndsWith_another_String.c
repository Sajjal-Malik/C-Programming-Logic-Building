#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool stringEndsWith(char *string, char *end){
    int string_length = strlen(string);
    int end_length = strlen(end);

    if(end_length > string_length) 
        return false;
    
    for(int i = 0; i < end_length; i++)
        if(string[string_length - i] != end[end_length - i])
            return false;
    
    return true;
}

int main(){

    char mystring[] = "Roses are red";
    char end_ok[] = "red";

    if(stringEndsWith(mystring, end_ok))
        printf("Yes string ends with %s \n", end_ok);
    else
        printf("String ends with some other string \n");
        

    return 0;
}