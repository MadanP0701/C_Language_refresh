# include <stdio.h>

// We need structure type to declare some variables in local scope, or other purposes

struct EMPLOYEE{ // EMPLOYEE is type of structure
    char* name;
    int age;
    int salary;
}; // ";" is important

int manager(){
    struct EMPLOYEE manager; // manager is a variable which contains 2 int and 1 char*
    manager.age = 45;
    if(manager.age>= 55){
        manager.salary = 55000;
    } 
    else{
        manager.salary = 40000;
    }
    return manager.salary;
}

int main(){
    
    // manager.salary is illegal since manager variable is local to manager
    struct EMPLOYEE emp1;
    struct EMPLOYEE emp2;
    emp1.salary = 20000;
    emp2.salary = 21000;
    int x = manager();
    printf("%d", x);

    return 0;
}