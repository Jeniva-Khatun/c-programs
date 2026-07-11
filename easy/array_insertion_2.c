// Insert an element at the end

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

//insert element
arr[element] = value ;
element++;

printf("\nafter element insertion :");
for(int i= 0; i< element  ; i++){
    printf("%d ", arr[i]);
}

return 0;
}
