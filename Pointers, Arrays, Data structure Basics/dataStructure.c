# include <stdio.h>
/* 
Syntax: struct{
...
} var1, var2;
*/ 

// e.g

struct {
    char *engine;
    char *fuel_type;
    float city_mileage;
}car1, car2;


int main(){

    car1.engine = "DDis 190 Engine";
    car2.engine = "1.2 L Kappa Dual VTVT";
    car1.city_mileage = 12.3;
    car2.city_mileage = 14.99;
    printf("%s\n", car1.engine);
    printf("%s\n", car2.engine);
    printf("%f\n", car1.city_mileage);
    printf("%f\n", car2.city_mileage);
    return 0;
}