#include <stdio.h>

int main(){

    int a =1, b=2, c ='a'; // int c is 97(ASCII)
    // comma can be used to seperate
    printf("%d\n",a);

    int i = (3,4,8); // parenthesis have highest preference thats why it got 8
    int j;
    j = 3, 4, 8; // comma operator has least preference, assignment over comma

    // int k = 3, 4, 8; --> will be error
    //since during function calling, declaration, it acts like seperator not operator
    // int k = 3; int ; int 8; is error
    // comma operator returns rightmost operand to expression, rest of them are ***evaluated*** and rejected

    printf("%d\n",i);
    printf("%d\n",j);
    
    if(printf("I love "), 5>3){ // evaluate then reject
        printf("Robocon");
    }
    else{
        printf("I love");
    }
    return 0;
}