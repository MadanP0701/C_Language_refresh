# include <stdio.h>


int main(){
  /*
  %s: tells the printf that go to the memory loc of first char
  then print it and increment the memory by 1 byte
*/

    char* s = "Print"; // s = memory location
    char x[6] = "Print"; // x = {'P','r','i','n','t', \0}
    printf("%s %s", s, x);
    // but x is mutable, s is immutable
    return 0;
}