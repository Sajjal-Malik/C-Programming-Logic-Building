#include<stdio.h>
#include<stdbool.h>
#include<string.h>

void print_max_char(char *s){
    int len = strlen(s);
    char unique[len];

    int counted = 0;
    int max_count;
    char max_char;

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
            max_count = count;
            max_char = s[i];
        }
        else if(count > max_count){
            max_count = count;
            max_char = s[i];
        }
    }

    if(len > 0)
        printf("%c:%d\n", max_char, max_count);
    else
        printf("String has 0 length.");

}

int main(){

    char s[] = "abcdefabcdedabcdefabcdefabcdef";
    print_max_char(s);

    return 0;
}