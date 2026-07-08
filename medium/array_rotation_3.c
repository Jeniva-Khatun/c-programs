// Rotate an array by K positions

#include<stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int key = 2;

    printf("Before left rotation:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    for (int j= 0; j < key ; j++) {

    int first = arr[0];

    // Shift left

    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr[size - 1] = first;
}

    printf("\n\nAfter left rotation:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
