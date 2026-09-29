# include <stdio.h>

int main(){
    int num_Ofelements;

    printf("How many elements you want: ");

    scanf("%d", &num_Ofelements);
    int a[num_Ofelements];

    for(int i =0; i < num_Ofelements; i++){
        printf("Enter Num%d ", i+1);
        scanf("%d", &a[i]);
    }

    int min, max, x;
    min = a[0];
    max = a[0];

    for(int j = 0; j<num_Ofelements; j++){
        for(int i = 0; i < num_Ofelements-(j+1); i++){ // after 1 bubble sort iteration, last element stays sorted
            if(a[i]>a[i+1]){
                x = a[i];
                a[i] = a[i+1];
                a[i+1] = x;

            }
            else{
                continue;
            }
        }
    }
    min = a[0];
    max = a[num_Ofelements-1];
    printf("Min: %d\n",min);
    printf("Max: %d\n", max);
    return 0;
}