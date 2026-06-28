#include <stdio.h>

int main() {
    int arr[4];

   printf("Enter 4 elements :\n ");  // input elements
   for(int i= 0 ; i<4 ;i++){
       scanf("%d", &arr[i]);
   }

    printf("Array elements are :\n " );
    for(int i= 0 ; i<4 ;i++){
        printf("%d ", arr[i]);
    }
return 0;
}
