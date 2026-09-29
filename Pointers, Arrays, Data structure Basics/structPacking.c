# include <stdio.h>

#pragma pack(1) // turning on pragma
struct ABC{
    char a; // 1 byte
    char b; // 1 byte
    int c; // 4 bytes
} var;

int main(){
    printf("%d",sizeof(var)); // 6 bytes

    /*
    It will save memory but waste cycles
    */
}