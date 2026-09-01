#include<stdio.h>

int main (){

int arr[6]= {11,22,33,44,55,66};
int i, temp;

printf("array elements are = ");
for(i = 0 ; i<6; i++){
    printf("%d ", arr[i]);
}
for(i = 0 ; i<6/2; i++){
temp = arr[i];
arr[i] = arr[5-i];
arr[5-i] = temp;

}
 printf("\nreversed array elements are =");
 for(i = 0 ; i<6; i++){
     printf("%d ", arr[i]);
 }
 printf("\n");
    return 0 ;

}
