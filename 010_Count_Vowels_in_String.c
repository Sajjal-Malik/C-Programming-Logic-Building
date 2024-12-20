#include<stdio.h>
#include<string.h>
#include<ctype.h>

int vowelCount(char *str){

    int count = 0;

    for(int i = 0; i < strlen(str); i++){
        switch (toupper(str[i]))
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            count++;
        } 
    }
    return count;
}

int main(){

    char str[] = "It's a wonderful day!";
    int count = vowelCount(str);

    printf("Vowel count -> %d\n", count);

    return 0;
}