#include <stdio.h>

int main(){
    char result;
    int marks;
    printf("Marks: ");
    scanf("%d", &marks);
    /*
    if(marks > 32){
        result = 'p';
    }
    else{
        result = 'f';
    }
    */
    // can be written as 

    result = (marks > 32) ? 'p' : 'f';

    // (boolean)? if-true : if-false

    printf("Result: %c\n", result);

    int var1 = 75;
    int var2 = 56;
    int num;
    num = sizeof(var1) ? (var2>23? ((var1 == 75)? 'A': 0):0):0;
    printf("%d\n", num);
    /*
    non-zero in C are treated as true
    sizeof(var1) is not zero, 
    i.e. if-true = (var2>23? ((var1 == 75)? 'A': 0):0) will be executed
    Now, var2>23 will return true
    i.e ((var1 == 75)? 'A': 0) will be executed
    Now, var1 == 75 is true, i.e. 'A' will be executed

    ASCII value of A is 65, i.e. ans is 65
    */

    // sizeof(expression1) gives bytes, expression1 is not evaluated
    return 0; 
}