# include <stdio.h>

int repeating(int arr[10]){
    for(int i = 0; i < 10; i++){
        if(arr[i] == 0){
            continue;
        }
        if(arr[i] > 1){
            return 2;
        }
    }
    return 1;

}

int main(){
    int num;
    printf("Enter number you want to check: ");
    scanf("%d", &num);
    if(num < 0){
        num = - num;
    }
    int seen[10] = {0};
    for(int i = 0; i < 10; i++){
        int digit;
        digit = num%10;
        seen[digit]++;
    }
    if(repeating(seen) == 2){
            printf("It has repeating digits");
        }
    else if(repeating(seen) == 1){
        printf("It has no repeating digits");
        
    }
}
