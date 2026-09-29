# include <stdio.h>

void matrixMultiplier(int a1,int a2, int b1, int b2,int a[a1][a2],int b[b1][b2]);

int main(){
    int arows, acolumns;
    printf("Enter rows n column of matrixA: ");
    scanf("%d %d", &arows, &acolumns);
    int a[arows][acolumns];
    printf("Enter elements of matrix A:\n");
    for(int i = 0; i<arows; i++){
        for(int j = 0; j<acolumns; j++){
            scanf("%d", &a[i][j]);
        }   
    }


    int brows, bcolumns;
    printf("Enter rows n column of matrixB: ");
    scanf("%d %d", &brows, &bcolumns);
    int b[brows][bcolumns];
    printf("Enter elements of matrix B:\n");
    for(int i = 0; i<brows; i++){
        for(int j = 0; j<bcolumns; j++){
            scanf("%d", &b[i][j]);
        }   
    }
    matrixMultiplier(arows,acolumns,brows,bcolumns, a, b);


    return 0;
}

void matrixMultiplier(int a1,int a2, int b1, int b2,int a[a1][a2],int b[b1][b2]){
    
    int resultant[a1][b2];

    for(int i = 0; i<a1; i++){
        for(int j = 0; j < b2; j++){
            resultant[i][j] = 0;
            for(int k = 0; k < a2; k++){
                resultant[i][j] += a[i][k] * b[k][j];
            }
        }

    }
    for(int i = 0; i < a1; i++){
        for(int j = 0; j < b2; j++){
            printf("%d ", resultant[i][j]);
        }
        printf("\n");

    }

}