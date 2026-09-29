# include <stdio.h>


int main(){
    int rows;
    printf("How many rows you want: ");
    scanf("%d", &rows);
    for(int i = 1; i<=rows; i++){
        for(int j = 1; j <= 2*rows -1; j++ ){
            if(j > (rows-i) && j < (rows+i)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        
    }

    return 0;
}