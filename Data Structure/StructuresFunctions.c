// Passing structure as argument
# include <stdio.h>

struct student {
    char name[50];
    int age;
    int roll_no;
    float marks;
};


void print1(char name[], int age, int roll_no, float marks){
    printf("%s %d %d %.2f\n", name, age, roll_no, marks);

}
void print2(struct student x){
    printf("%s %d %d %.2f\n", x.name, x.age, x.roll_no, x.marks);

}

int main(){
    // Passing structure members in function
    struct student s1 = {"Mike", 17, 34, 72.5};
    print1(s1.name, s1.age, s1.roll_no, s1.marks);

    // Passing structure variable directly in function
    // Name of struct variables are not pointers
    // It is a pass by value(not pass by reference)
    print2(s1);
    return 0;
}