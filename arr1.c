//1.wap in c to insert an element into a one dimentional array at any specified location
#include <stdio.h>

int main() {
    int arr[100], n, i, pos, value;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position (1 to %d) where you want to insert: ", n+1);
    scanf("%d", &pos);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    if(pos < 1 || pos > n+1) {
        printf("Invalid position!\n");
    } else {
        for(i = n; i >= pos; i--) {
            arr[i] = arr[i-1];
        }

        arr[pos-1] = value;
        n++; 

        printf("Array after insertion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
