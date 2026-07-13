// Find the largest element
#include <stdio.h>

int main() {
    int arr[5]={34 , 65 , 41 , 78 , 97};
    int largest = arr[0];


    printf("Array elements:\n");   //print elements
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    //find largest elements
    for(int i=0 ; i<5 ; i++){
        if (arr[i]>largest){
            largest = arr[i] ;

        }
    }
    printf("\nLargest :%d\n", largest);
printf("\n");
    return 0;
}
