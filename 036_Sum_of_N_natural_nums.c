#include<stdio.h>

int sum(int n){
    if(n > 0){
        return n + sum(n - 1);
    }
    else{
        return 0;
    }
}

int main(){

    int ans = sum(5);
    printf("ans: %d\n", ans);

    return 0;
}