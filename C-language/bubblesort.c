#include <stdio.h>

int main() {
    int arr[] = {5,4,2,7,8,1};
    int len = 6;
    for(int i=0; i<len-1; i++){
        for(int j=i+1; j < len; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0; i<len ;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}