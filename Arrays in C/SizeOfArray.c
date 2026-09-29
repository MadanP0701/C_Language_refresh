# include <stdio.h>

int main(){

    int arr[] = {1,2,3,3,4,5,6,6,7,8,22,858,22,221,77,92};
    // sizeof(arr[0]) gives size of 1 int in arr in bytes
    // sizeof(arr) gives size of whole arr in bytes 

    int numberOfElements = sizeof(arr)/sizeof(arr[0]);
    printf("%d", numberOfElements);
    return 0;
}