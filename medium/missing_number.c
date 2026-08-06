
#include <stdio.h>

int main() {
    int arr[4];
    int n = 5;
    int expectedSum = 0;
    int arraySum = 0;

    printf("Enter 4 numbers from 1 to 5 with one number missing:\n");

    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate expected sum
    for (int i = 1; i <= n; i++) {
        expectedSum += i;
    }

    // Calculate array sum
    for (int i = 0; i < 4; i++) {
        arraySum += arr[i];
    }
int missing_num = expectedSum - arraySum ;
    printf("Missing number = %d\n", missing_num);

    return 0;
}
