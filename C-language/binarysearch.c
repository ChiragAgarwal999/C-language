#include <stdio.h>

int binarySearch(int arr[], int n, int start, int end) {
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == n)
            return mid;  

        if (arr[mid] < n)
            start = mid + 1; 
        else
            end = mid - 1;  
    }
    return -1;
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n;
    printf("Enter n.o to search : ");
    scanf("%d",&n);
     int size = sizeof(arr) / sizeof(arr[0]);
    int index = binarySearch(arr, n, 0, size - 1);
    if (index != -1)
        printf("Element found at index %d\n", index);
    else
        printf("Element not found\n");

    return 0;
}