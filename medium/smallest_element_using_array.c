// Find the smallest element
#include<stdio.h>
int main (){
int arr[5]={23,34,54,10 ,28};
int smallest = arr[0];

printf("Array elements are = ");
for (int i = 0; i<5 ; i++){
    printf("%d ", arr[i]);
}

//find smallest
for(int i = 0; i<5 ; i++){
    if (arr[i]<smallest){
        smallest = arr[i];
    }
}
printf("\nsmallest = %d\n", smallest);

printf("\n");


    return 0;
}
