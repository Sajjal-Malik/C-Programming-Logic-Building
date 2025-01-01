#include <stdio.h>
#include <string.h>

void string_split(char *str, int index, char *first, char *second){

    int len = strlen(str);
    if(index < len){
        for(int i = 0; i < index; i++)
            first[i] = str[i];
        first[index] = '\0';

        for(int i = index; i <= len; i++)
            second[i - index] = str[i];
    }

}

int main(){

    char str[] = "This is a string to be splitted.";
    char first[100], second[100];
    
    string_split(str, 14, first, second);

    printf("%s\n", first);
    printf("%s\n", second);



    return 0;
}