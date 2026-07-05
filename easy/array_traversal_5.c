// Count even and odd elements


#include<stdio.h>
int main (){
    int arr[5];
 int i,even=0, odd=0 ;


printf("Enter 5 elements : "); //input elemnts
for(i = 0 ; i < 5 ; i++){
    scanf("%d" , &arr[i]);
}

 printf("Array elements are :" ); //print array elements
 for(i=0; i< 5 ; i++){
     printf("%d ", arr[i] );
 }
 // Count even and odd elements
     for (i = 0; i < 5; i++) {
         if (arr[i] % 2 == 0)
             even++;
         else
             odd++;
     }


          printf("\nEven elements = %d\n", even);

          printf("\nodd elements = %d\n", odd );





     return 0;
 }
