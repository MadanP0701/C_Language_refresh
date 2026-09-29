# include <stdio.h>

int factorial(int i);

int main(){
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);
    printf("%d\n", factorial(x));
return 0;

}
int factorial(int i){
    
    if(i == 1 || i == 0){
        return 1; 
    }
    else{
        return i * factorial(i-1); // n! = n * (n-1)!
    }
}
