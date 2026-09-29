# include <stdio.h>

struct ABC{
    char a; // 1 byte
    char b; // 1 byte
    int c; // 4 bytes
} var;

int main(){
    printf("%d",sizeof(var)); // 8 bytes

    /*
        Total is 6 bytes but it uses 8 bytes and wastes 2 bytes.
        It is done to prevent extra cycles compeleted by CPU.

        In 64bits, i.e 8 bytes computer, reading 8 completely will optimise
        memory but it will take more time and more CPU cycles
        To make it in single cycle, 2 byte storage is wasted/empty
    */


}