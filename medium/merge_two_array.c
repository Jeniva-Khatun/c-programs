#include<stdio.h>
int main (){
int arr_1[3], arr_2[3], arr_3[6];

//input first arr
printf("Enter 3 elements: ");
for( int i = 0 ; i < 3 ; i++){
    scanf("%d", &arr_1[i]);
}

//input second arr
printf("Enter 3 elements: ");
for( int i = 0 ; i < 3 ; i++){
    scanf("%d", &arr_2[i]);
}

//copy first array into merge array
for(int i =0; i< 3; i++){
     arr_3[i] = arr_1[i] ;
}

//copy second array into merge array
for(int i =0; i< 3; i++){
     arr_3[i+3] =   arr_2[i];
}
 //print merge elements
 printf("\nMerged elements are :");
 for (int i = 0 ; i < 6 ; i++){
     printf("%d ", arr_3[i]);
 }

 printf("\n");
    return 0 ;
}
