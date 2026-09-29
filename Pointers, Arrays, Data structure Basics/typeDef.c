# include <stdio.h>

typedef int INTEGER; // we can use type def to create own type like int char etc
// it creates alias for struct, making structures easy to use

typedef struct CAR{ // structure type
    char* engine;
    char* fuel_type;
    int cityMileage;

}car; // car is not a variable, it is a data type now

typedef char* string;

int main(){
    INTEGER x = 5;
    printf("%d\n", x);

    car c1; // car is data-type like int and c1 is variable name
    c1.fuel_type = "Petrol";
    c1.cityMileage = 15;
    printf("%s\n", c1.fuel_type);

    string name = "Madan";
    printf("%s", name);
    return 0;
}