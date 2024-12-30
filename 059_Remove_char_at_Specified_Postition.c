#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool remove_char(char *s, int pos){
    int len = strlen(s);

    if(pos >= len)
        return false;

    for(int i = pos; i < len; i++)
        s[i] = s[i + 1];

    return true;
}

int main(){

    char s[] = "12345-12345";
    printf("Old String -> %s\n", s);

    bool result = remove_char(s, 5);
    if(result)
        printf("Character removed successfully!\n");
    else
        printf("Character not removed\n");

    printf("New String -> %s\n", s);

    return 0;
}