#include <stdio.h>
#define STRING "%s\n"
#define PYTHON "Hello Python"

int main(){
    printf(STRING, PYTHON); // define will replace string with "%s\n" before execution
    // compiler will read it as printf("%s\n", "Hello Python")
    return 0;
}