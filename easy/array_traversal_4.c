// Find the average of all elements
#include<stdio.h>
 int main (){

     int arr[5];
int i,sum=0;
float average;

printf("Enter 5 elements : ");
for(i = 0 ; i < 5 ; i++){
    scanf("%d" , &arr[i]);
}

 printf("Array elements are :" ); //print array elements and average
 for(i=0; i< 5 ; i++){
     printf("%d ", arr[i] );
     sum = sum + arr[i] ;
 }
  average = sum/5 ;
  printf("\nAverage = %.2f\n", average);


     return 0;
 }
