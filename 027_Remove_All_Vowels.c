#include<stdio.h>
#include<string.h>

int main(){

    char s[] = "a quick brown fox jumps over the lazy dog.";
    int curpos = 0;
    int newpos = 0;

    while(curpos < strlen(s)){
        if( !(s[curpos] == 'a' || s[curpos] == 'e' || s[curpos] == 'i' || s[curpos] == 'o' || s[curpos] == 'u') ) {
            s[newpos] = s[curpos];
            newpos++;
        }
        curpos++;
    }
    s[newpos] = '\0';

    printf("s: %s\n", s);


    return 0;
}