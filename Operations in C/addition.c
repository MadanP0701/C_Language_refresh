// add without arithemetic operators
# include <stdio.h>
int add(int a, int b);
int main(){
    printf("%d\n", add(4,-1));
    return 0;
}

int add(int a, int b){
    if(b > 0){
        while(b != 0){
            a++;
            b--;
        }
    }
    else if(b < 0){
        a--;
        b++;
    }
    // a is getting added b one by one 
    return a;
}