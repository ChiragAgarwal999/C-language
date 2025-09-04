// write a program to delete a particular element in array
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

    int idx;
    printf("Idx : ");
    scanf("%d", &idx);

    n-=1;
    printf("\nYou entered:\n");
    for (int i = 0; i < n; i++) {
        if(i>=idx-1){
            arr[i] = arr[i+1];
        }
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}
