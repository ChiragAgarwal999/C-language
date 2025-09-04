#include <stdio.h>

int main() {
    int arr[5] = {3,4,1,0,2};
    int size  = sizeof(arr)/sizeof(arr[0]);
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
     for(int i=0; i<size; i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}