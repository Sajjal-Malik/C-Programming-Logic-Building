#include<stdio.h>
#include<string.h>

int convert(char *string){

    int slen = strlen(string);
    int total = 0;
    int decval = 1;

    for(int i = (slen - 1); i >= 0; i--){
        if(string[i] == '1'){
            total += decval;
        }
        decval *= 2;
    }
    return total;
}

int main(){

    char s1[] = "11111111";
    int result = convert(s1);
    printf("Decimal is: %d", result);


    return 0;
}