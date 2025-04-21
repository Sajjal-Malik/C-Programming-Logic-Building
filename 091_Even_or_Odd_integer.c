#include<stdio.h>
#include<stdbool.h>

bool is_evn(int number){
    if(number % 2 != 0){
        return true;
    }
    else{
        return false;
    }
}

bool is_odd(int number){
    if(number % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    int number = 9;
    
    if(is_evn(number)){
        printf("number is even \n");
    }
    else{
        printf("number is odd \n");
    }

    if(is_odd(number)){
        printf("number is odd \n");
    }
    else{
        printf("number is even \n");
    }
    
    return 0;
}