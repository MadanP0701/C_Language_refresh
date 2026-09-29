# include <stdio.h>
#include <math.h>

int main(){
    int num;
    printf("Enter yo number");
    scanf("%d", &num);
    if(num <= 1){
        printf("It is nor prime not composite");
    }
    else{
        int a;
        a = sqrt(num); // we have to only check till square root of given number
        int isPrime = 1;
        for(int i =2; i<=a; i++){ // from 2 since %1 will anyways be 0
            int div = num % i;
            if(div == 0){
                isPrime = 0; // 0 --> false
                break;
            }
            else{
                continue;
            }
        }
        if(isPrime){
            printf("It is Prime");
        }
        else{
            printf("Not Prime");
        }

    }
    return 0;
}