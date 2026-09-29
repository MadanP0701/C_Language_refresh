# include <stdio.h>

int main(){

    // Lexical analysis will read from left to right till it sees a longest meaningful lexeme, e.g. int is a meaningful lexeme
    int a = 0;
    int i = 0;
    int b = 1;
    int w = a+++b;
    printf("%d\n",a);
    int v = ++a+b;
    // a is max. valid lexeme and ++ is  max. valid lexeme,
    //  a+ is not valid lexeme, i.e it stops at "a"
    // i.e a++ then + then b
    // lexical also stops at spacing

    printf("%d\n", w); // since it is post increment ts will assign  initial value first then increment a's value

    printf("%d\n", v); // a was already assigned 1 after assigning 0 to w
    // 1(a)+1(increment)+1(b) = 3
    return 0;
}