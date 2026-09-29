# include <stdio.h>

struct point{
    int x; int y;
};

void print(struct point* ptr){
    printf("%d %d\n", ptr->x, ptr->y);
}
int main(){
    struct point p1 = {23, 45};
    print(&p1);

    return 0;
}