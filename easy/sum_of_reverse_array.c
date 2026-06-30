#include<stdio.h>
int main (){
int arr[5];
int reverse,sum=0;
printf("Enter 5 elements :\n"); // input  elements
for(int i=0;i<5;i++){
    scanf("%d", &arr[i]);
}

for (int i=0;i<5/2 ;i++){ //reverse array elements
    reverse = arr[i];
    arr[i] = arr[4-i];
    arr[4-i] = reverse;
}

printf("Reversed  array elements :\n ");  //print reversed elements with their sum
for(int i=0;i<5;i++){
    printf("%d ", arr[i]);
    sum += arr[i];
}
printf("\nSum of array elements= %d\n", sum);
return 0;
}
