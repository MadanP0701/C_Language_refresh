// In fibonacci series, previous term is obtained by taking sum of previous two terms

# include <stdio.h>

int main(){
    int maxLimit, x,y,sum;
    printf("Till where you want fiboncci series: ");
    scanf("%d", &maxLimit);
   
    x = 0,y=1,sum=0;
    for(int i =0; i < maxLimit; i++){
        printf("%d\n", sum);
        x = y; // Previous sum value is getting stored in x
        y = sum; // new sum value is stored in y
        sum = x+y; // both are added
    }

    return 0;
}