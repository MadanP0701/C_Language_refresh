# include <stdio.h>

int main(){
    int x;
    int arr[9] ={ 3, 56, 54, 32, 67, 89, 90, 32, 21};
    for(int i = 0; i< 9/2; i++){
        x = arr[i];
        arr[i] = arr[9-(i+1)];
        arr[9-(i+1)] = x;
    }
    for(int i = 0; i < 9; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}