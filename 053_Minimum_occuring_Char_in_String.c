#include<stdio.h>
#include<stdbool.h>
#include<string.h>

void print_min_char(char *s){
    int len = strlen(s);
    char unique[len];

    int counted = 0;
    int min_count;
    char min_char;

    for(int i = 0; i < len; i++){
        bool already_counted = false;

        for(int j = 0; j < counted; j++)
            if(s[i] == unique[j])
                already_counted = true;

        if(already_counted) continue;

        int count = 0;
        for(int j = 0; j < len; j++)
        if(s[i] == s[j])
            count++;

        unique[counted] = s[i];
        counted++;

        if(counted == 1){
            min_count = count;
            min_char = s[i];
        }
        else if(count < min_count){
            min_count = count;
            min_char = s[i];
        }
    }

    if(len > 0)
        printf("%c:%d\n", min_char, min_count);
    else
        printf("String has 0 length.");

}

int main(){

    char s[] = "abcdefabcdedabcdefabcdefabcdef";
    print_min_char(s);

    return 0;
}