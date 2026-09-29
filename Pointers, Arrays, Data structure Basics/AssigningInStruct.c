# include <stdio.h>
// In this 2 methods of initialisation is discussed 

struct ABC{
    int p;
    int q; // assigning inside struct is NOT allowed
    char* r;
};

int main(){
    
    //1st

    struct ABC x = {23, 34, "Madan"}; // is allowed

    printf("%s %d %d\n", x.r, x.p, x.q);
    x.r = "Nadan";
    printf("%s\n", x.r);

    // 2nd: Using dot operator

    struct  ABC y = {.r = "Madhu", .p = 33, .q = 44};
    printf("%s %d %d", y.r, y.p, y.q);
    return 0;
}