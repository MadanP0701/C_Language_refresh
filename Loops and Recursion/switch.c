# include <stdio.h>

int main(){

    for(int i = 0; i < 20; i++){
        switch(i){ // break statements are imp in switch

            case 0: i += 5; 
            case 1: i += 2; // no break --> all cases are evaluated
            case 5: i += 5;
            default: i += 4;

        }
        printf("%d\n", i);
    }
    return 0;
}