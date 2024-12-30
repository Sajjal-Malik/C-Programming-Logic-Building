#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef enum coin {HEADS, TAILS} coin;

coin flipCoin(){

    if(rand() % 2 == 0) 
        return HEADS;
    else 
        return TAILS;
}

int main(){

    coin myCoin = HEADS;

    srand( time(NULL) );

    for(int i = 0; i < 10; i++){
        if(flipCoin() == HEADS)
            printf("HEADS\n");
        else 
            printf("TAILS\n");
    }


    return 0;
}