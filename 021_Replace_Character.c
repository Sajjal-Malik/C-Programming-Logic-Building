#include<stdio.h>
#include<string.h>

void replace_char(char *string, char replace, char new){
    int slen = strlen(string);
    for(int i = 0; i < slen; i++){
        if(string[i] == replace){
            string[i] = new;
        }
    }
}

int main(){

    char s1[] = "aaaaBBBBBaaaaCCCCCCaaaaaDDDD";
    replace_char(s1, 'a', 'A');
    printf("%s\n", s1);

    return 0;
}