# include <stdio.h>

struct ABC{
    int x;
    int y;
};



int main(){
    struct ABC a = { 0, 1}; // a.x = 0, a.y = 1 
    struct ABC* ptr = &a;
    printf("%d %d\n", ptr->x, ptr->y); // ptr->x means (*ptr).x

    return 0;
}