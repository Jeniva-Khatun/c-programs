
//Insert an element at the beginning

#include<stdio.h>
int main(){
int arr[10]={2,3,4,5};
int element=4;
int value= 1;
int i;
printf("before element insertion :");
for(int i= 0; i< element  ; i++){
    printf("%d ", arr[i]);
}

 // shift the elemnts
 for(int i=element ; i > 0; i--){
     arr[i] = arr[i-1];
 }
//insert element
arr[0] = value ;
element++;

// print elements
printf("\nAfter element insertion :");
for(int i= 0; i< element  ; i++){
    printf("%d ", arr[i]);
}


    return 0;
}
