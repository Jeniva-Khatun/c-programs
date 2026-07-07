#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    printf("Before right rotation:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    int last = arr[size - 1];

    // Shift right
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = last;

    printf("\n\nAfter right rotation:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
