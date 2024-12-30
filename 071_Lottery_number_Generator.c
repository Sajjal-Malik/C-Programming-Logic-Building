#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
    // Seed the random number generator
    srand(time(NULL));
    int number;
    int numbers[6];
    bool unique;

    for(int i = 0; i < 6; i++){
        do{
            number = (rand() % 59) + 1;
            unique = true;
            for(int j = 0; j < number; j++)
                if(numbers[j] == number)
                    unique = false;

        }while(!unique);
        
        printf("Number %d : %d\n", i+1, number);
    }

    return 0;
}
