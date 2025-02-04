#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool stringStartsWith(char *string, char *start){
    int string_length = strlen(string);
    int start_length = strlen(start);

    if(start_length > string_length) 
        return false;
    
    for(int i = 0; i < start_length; i++)
        if(string[i] != start[i])
            return false;
    
    return true;
}

int main(){

    char mystring[] = "Roses are red";
    char start_ok[] = "Roses";

    if(stringStartsWith(mystring, start_ok))
        printf("Yes string starts with %s \n", start_ok);
    else
        printf("String starts with some other string \n");
        

    return 0;
}