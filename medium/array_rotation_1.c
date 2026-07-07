//Left rotate an array by one position
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    printf("Before left rotation:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    int first = arr[0];

    // Shift left
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr[size - 1] = first;

    printf("\n\nAfter left rotation:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
