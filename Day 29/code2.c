#include <stdio.h>

int main() {
    int arr[100], n = 0, i, choice, key;
    int largest, smallest, sum = 0, found = 0;

    do {
        printf("\n===== MENU DRIVEN ARRAY OPERATIONS =====\n");
        printf("1. Create Array\n");
        printf("2. Display Array\n");
        printf("3. Search Element\n");
        printf("4. Find Largest Element\n");
        printf("5. Find Smallest Element\n");
        printf("6. Find Sum of Elements\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter the number of elements: ");
                scanf("%d", &n);

                printf("Enter %d elements:\n", n);
                for (i = 0; i < n; i++) {
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                if (n == 0) {
                    printf("Array is empty.\n");
                } else {
                    printf("Array elements are: ");
                    for (i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                printf("Enter element to search: ");
                scanf("%d", &key);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (arr[i] == key) {
                        printf("Element found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Element not found.\n");
                break;

            case 4:
                largest = arr[0];
                for (i = 1; i < n; i++) {
                    if (arr[i] > largest)
                        largest = arr[i];
                }
                printf("Largest element = %d\n", largest);
                break;

            case 5:
                smallest = arr[0];
                for (i = 1; i < n; i++) {
                    if (arr[i] < smallest)
                        smallest = arr[i];
                }
                printf("Smallest element = %d\n", smallest);
                break;

            case 6:
                sum = 0;
                for (i = 0; i < n; i++) {
                    sum += arr[i];
                }
                printf("Sum of elements = %d\n", sum);
                break;

            case 7:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 7);

    return 0;
}