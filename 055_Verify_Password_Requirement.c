#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>

bool verify_password(char *password){
    
    int len = strlen(password);
    if(len < 8) 
        return false;
    
    bool has_upper = false;
    bool has_lower = false;
    bool has_digit = false;
    bool has_symbol = false;

    for(int i = 0; i < len; i++){
        if(isupper(password[i]))
            has_upper = true;
        if(islower(password[i]))
            has_lower = true;
        if(isdigit(password[i]))
            has_digit = true;
        if(iswpunct(password[i]))
            has_symbol = true;
    }

    if(!has_upper)
        return false;
    if(!has_lower)
        return false;
    if(!has_digit)
        return false;
    if(!has_symbol)
        return false;

    return true;

}

int main(){

    char p[] = "Ax5abcdefgh";
    bool result = verify_password(p);
    if(result)
        printf("Password Verified!");
    else
        printf("Invalid Password!");

    return 0;
}