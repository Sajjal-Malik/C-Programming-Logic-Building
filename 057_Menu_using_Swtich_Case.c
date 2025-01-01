#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){

    double balance = 0, amount = 0;
    int choice = 0;
    
    while (true) {
        printf("1) Deposit\n");
        printf("2) Withdraw\n");
        printf("3) Print Balance\n");
        printf("4) Print Balance and Quit\n");
        printf("5) Quit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
                printf("Enter Amount you want to DEPOSIT: ");
                scanf("%lf",&amount);
                balance += amount;
                break;
            case 2:
                printf("Enter Amount you want to WITHDRAW? ");
                scanf("%lf",&amount);
                balance -= amount;
                break;
            case 3:
                printf("Your Account Balance is: %.2f\n", balance);
                break; 
            case 4:
                printf("Your Account Balance is: %.2f\n", balance);
                
            case 5:
                exit(0);
        }
    }

    return 0;
}