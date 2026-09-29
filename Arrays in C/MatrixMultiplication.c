// Q. Multiply 2 matrices

// In multiplication, result matrix has rows as many as first matrix and colum as many as second matrix

#include <stdio.h>
void array_print(int s1, int s2, int arr[s1][s2]);
int main(){
    int matrix1[3][3] = {{1,2,3},{1,2,1},{3,1,2}};
    int matrix2[3][3] = {{1,2,3},{1,2,1},{3,1,2}};
    int resultant[3][3] = {0};

    for(int i =0; i<3; i++){
        for(int j =0; j<3; j++){
            for(int k =0; k<3; k++){
                resultant[i][j] += matrix1[i][k]*matrix2[k][j];
            }
        }
    }
    printf("\n");
    array_print(3,3,resultant);

    return 0;
}

void array_print(int s1, int s2, int arr[s1][s2]){
        for(int i = 0; i< s1; i++){
            for(int j = 0; j<s2; j++){
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
        printf("\n");

}