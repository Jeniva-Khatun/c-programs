//rem dup ele
#include <stdio.h>

int main() {                                           /////understanding incomplete
    int arr[10];
    int size;                                              /////understanding incomplete

    printf("Enter the size of the array: ");
    scanf("%d", &size);
                                                 /////understanding incomplete
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Remove duplicates
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {

            if (arr[i] == arr[j]) {

                // Shift elements to the left
                for (int k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }

                size--;
                j--;
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
