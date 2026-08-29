#include<stdio.h>
int main (){
int arr[30];
int i,j=0,n,temp;

printf("Enter number of elements : ");
scanf("%d", &n);

printf("Array elements are : ");
for(i = 0; i< n ; i++){
scanf("%d", &arr[i]);
}

//move non zero elements to left
for(i = 0; i< n ; i++){
    if (arr[i] != 0) {

    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    j++;
}
}
printf("Array elements after moving zero at end  :");
for(i = 0; i< n ; i++){
    printf("%d ", arr[i]);
}
printf("\n");
    return 0;
}
