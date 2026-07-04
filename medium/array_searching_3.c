//Count occurrences of a given element

#include<stdio.h>
int main (){
int arr[5]={1,2,3,2,3};
int element,count=0;
int i;

//print array elements
printf("Array elements are = ");
for (i = 0; i < 5; i++){
    printf("%d ", arr[i]);
}

printf("\nEnter elements & know it's occurance : ");
scanf("%d", &element);

for (i = 0; i < 5 ; i++){
if (arr[i]==element)
    count++;
}
 printf("%d occur %d times\n", element, count );
printf("\n");


    return 0;
}
