# include <stdio.h>
// Q. print all odd numbers from 1 to 20

int main(){

    // break terminates the loop
    // continue skips the below statements but then it goes to loop condition or increment
    
    for(int i =1; i<=20; i++){
        if(i%2 != 0){
            printf("%d\n",i);
        }
        else{
            continue;
            printf("%d\n",i); // continue wont check statements after the statement
        }
    }
    return 0;
}