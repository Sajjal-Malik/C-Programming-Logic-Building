#include<stdio.h>

double km_to_miles(double km){

    return km * 0.6342343;
}

double km_to_nautical_miles(double km){

    return km * 0.6342343;
}

int main(){


    double start_km = 0;
    double end_km = 0;
    double step_km = 0;
    double current_km = 0;

    do{
        
        printf("Start km value: ");
        scanf("%lf", &start_km);

        if(start_km < 0){
            printf("Start km not >= 0:\n");
        }
    }while(start_km < 0);

    do{
        
        printf("Step km value: ");
        scanf("%lf", &step_km);

        if(step_km <= 0){
            printf("Step km not > 0:\n");
        }
    }while(start_km <= 0);

    do{
        
        printf("End km value: ");
        scanf("%lf", &end_km);

        if(end_km <= 0){
            printf("End km not > 0:\n");
        }
    }while(start_km <= 0);

    printf("\n\n\n");
    printf("%-20s%-20s%-20s\n", "Kilometers", "Miles", "Nautical");

    printf("**************************************************\n");
    for(current_km = start_km; current_km < end_km; current_km += step_km){
        printf("%-20.4f%-20.4f%-20.4f\n", current_km, km_to_miles(current_km), km_to_nautical_miles(current_km));
    }

    // printf("Start: %lf\n", start_km);
    // printf("Step: %lf\n", step_km);
    // printf("End: %lf\n", end_km);

    return 0;
}