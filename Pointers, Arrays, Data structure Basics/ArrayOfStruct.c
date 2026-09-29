# include <stdio.h>

typedef struct CAR{
    int fuel_tank_capacity;
    int seating_capacity;
    float city_mileage;
}car;

int main(){
    car c1[2]; // array of type car(just like int array, char array)
    for(int i = 0; i<2; i++){
        printf("Enter the car %d fuel tank capacity: ", i+1);
        scanf("%d", &c1[i].fuel_tank_capacity);
        printf("Enter the car %d seat capacity: ", i+1);
        scanf("%d", &c1[i].seating_capacity);
        printf("Enter the car %d city mileage: ", i+1);
        scanf("%f", &c1[i].city_mileage);
    }
    printf("\n");
    for(int i = 0; i<2; i++){
        printf("\nCar%d details: \n", i+1);
        printf("fuel tank capacity: %d\n", c1[i].fuel_tank_capacity);
        printf("seat capacity: %d\n", c1[i].seating_capacity);
        printf("City Mileage: %f\n", c1[i].city_mileage);
    }
    
    return 0;
}