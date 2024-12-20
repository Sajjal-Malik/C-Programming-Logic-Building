#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *string_append(char *s1, char *s2){
    int s1Len = strlen(s1);
    int s2Len = strlen(s2);
    int size = s1Len + s2Len + 1;
    char *s = calloc(size, sizeof(char));

    for(int i = 0; i < s1Len; i++){
        s[i] = s1[i];

        for(int i = 0; i < s2Len; i++){
            s[s1Len + i] = s2[i];
        }
        s[size - 1] = '\0';
    }
    return s;
}
int main(){

    char first[20] = "first ";
    char second[10] = "second";

    // strcat(first, second);
    // printf("%s", first);

    char s1[] = "abc";
    char s2[] = "wxyz";
    char *s = string_append(s1, s2);
    printf("%s", s);


    return 0;
}