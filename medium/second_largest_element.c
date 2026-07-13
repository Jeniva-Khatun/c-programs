// find second largest element
#include <stdio.h>

int main() {
    int arr[4]={34 , 65 , 41 , 97};
    int largest = arr[0];
    int second_largest = arr[0];

    printf("Array elements:\n");   //print elements
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }

    //find largest elements
    for(int i=0 ; i<4 ; i++){
        if (arr[i]>largest){
            largest = arr[i] ;

        }
    }
    printf("\nLargest :%d\n", largest);

    //find second largest
for(int i = 0;i<4 ; i++){
    if(arr[i] > second_largest && arr[i] < largest ){
        second_largest = arr[i];
    }
}
printf("Second_largest :%d\n", second_largest);

printf("\n");
    return 0;
}
