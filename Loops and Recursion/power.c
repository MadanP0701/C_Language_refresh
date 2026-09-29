# include <stdio.h>
int power(int base, int exponent);
int main(){
    int base;
    int exponent;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    printf("%d to power %d is %d\n",base, exponent, power(base,exponent));
    
    printf("2 to power 3 is: %d\n",power(2,3));
    return 0;
}

int power(int base, int exponent){
    int result = 1;
    while((exponent)!=0){
        result = result*base;
        exponent--;
    }
    return result;

}