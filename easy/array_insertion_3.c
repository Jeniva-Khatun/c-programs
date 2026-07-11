// Insert an element at any given index
#include<stdio.h>

int main (){
int arr[10]={1,2,3,4};
int element=4;
int value= 5;
int i;
printf("before element insertion :");
for(int i= 0; i< element  ; i++){
    printf("%d ", arr[i]);
}

 // shift the elemnts
 for(int i=element ; i > 2; i--){
     arr[i] = arr[i-1];
 }
//insert element
arr[2] = value ;
element++;

// print elements
printf("\nAfter element insertion :");
for(int i= 0; i< element  ; i++){
    printf("%d ", arr[i]);
}
 printf("\n");

    return 0;
}
