//multi dimensional array = array of arrays

# include <stdio.h>
void array_print(int s1, int s2, int arr[s1][s2]);

int main(){

    // Syntax: data_type name[size1][size2][size3]...[sizeN];

    int a[4][5] = {0}; // 4 arrays each of size 5 int
    int b[2][3] = {1,2,3,4,5,6}; /* [  [1,2,3]
                                       [4,5,6]   ] */
    int c[2][3] = {{1,2,3}, {4,5,6}};

    array_print(4,5,a);
    array_print(2,3,b);
    array_print(2,3,c);
    return 0;
}

void array_print(int s1, int s2, int arr[s1][s2]){
        for(int i = 0; i< s1; i++){
            for(int j = 0; j<s2; j++){
                printf("%d", arr[i][j]);
            }
            printf("\n");
        }
        printf("\n");

}