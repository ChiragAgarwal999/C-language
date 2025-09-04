#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, idx;

    printf("Enter index to delete (0-%d): ", n-1);
    scanf("%d", &idx);

    if(idx < 0 || idx >= n) {
        printf("Invalid index!\n");
        return 0;
    }

    for (int i = idx; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;

    printf("Array after deletion: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

