#include <stdio.h>

int main() {
    int arr[100], n, i, j;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Repeated elements are: ");

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;  // Avoid printing the same element multiple times
            }
        }
    }

    return 0;
}