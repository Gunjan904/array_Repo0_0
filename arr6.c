//6. write a menu driven program (using switch case) to perform the following array operation 
//a) Insert b) delete c) Traverse
#include <stdio.h>

#define MAX 100

int main() {
    int arr[MAX], n, choice, pos, val, i;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\n--- Array Operations Menu ---\n");
        printf("1. Traverse (Display)\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Traverse
                printf("Array elements: ");
                for (i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 2: // Insert
                if (n == MAX) {
                    printf("Array is full!\n");
                } else {
                    printf("Enter position (0-%d): ", n);
                    scanf("%d", &pos);
                    printf("Enter value: ");
                    scanf("%d", &val);

                    if (pos < 0 || pos > n) {
                        printf("Invalid position!\n");
                    } else {
                        for (i = n; i > pos; i--) {
                            arr[i] = arr[i - 1];
                        }
                        arr[pos] = val;
                        n++;
                        printf("Element inserted.\n");
                    }
                }
                break;

            case 3: // Delete
                printf("Enter position (0-%d): ", n - 1);
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("Invalid position!\n");
                } else {
                    for (i = pos; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Element deleted.\n");
                }
                break;

            case 4: // Exit
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
