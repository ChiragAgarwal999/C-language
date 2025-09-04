#include <stdio.h>

int main() {
    int n;
    printf("Arr length : ");
    scanf("%d", &n);

    int arr[n]; 

    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);  
        scanf("%d", &arr[i]);
    }

    int ins ,idx;

    printf("Ins : ");
    scanf("%d", &ins);

    printf("Idx : ");
    scanf("%d", &idx);

     n+=1;
    printf("\nYou enter       ed:\n");
    for (int i = 0; i < n; i++) {
        if(i>=idx){
            int temp = arr[i];
            arr[i] = ins;
            ins=temp;
        }
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}




