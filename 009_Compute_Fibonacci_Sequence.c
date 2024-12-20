#include<stdio.h>

int fibonacci(int n){
    if(n > 1) return fibonacci(n - 1) + fibonacci(n - 2);
    else if(n == 1) return 1;
    else if(n == 0) return 0;
    else{
        printf("Error: n must be >= 0");
        return -1;
    }
}

int main(){

    int term1 = 0;
    int term2 = 1;
    int fib = 0;
    int length = 0;

    do{
        printf("Enter Sequence length: ");
        scanf("%d, &length");
        if(length < 3)
            printf("Length must be >= 3\n");
    } while(length < 3);



    printf("\n-----Iterative Solution-----\n");
    printf("%d, %d", term1, term2);
    for(int i = 2; i < length; i++){
        fib = term1 + term2;
        printf("%d", fib);

        term1 = term2;
        term2 = fib;

        if(i != (length - 1)) printf(",");
        else printf("\n");
    }



    printf("\n-----Recursive Solution-----\n");
    for(int i = 0; i < length; i++){

        printf("%d", fibonacci(i));
        if(i != (length - 1)) printf(",");
        else printf("\n");

    }

    return 0;
}