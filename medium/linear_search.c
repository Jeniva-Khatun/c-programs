#include<stdio.h>
int linearSearch (int arr[] , int size , int target ){
    for (int i=0; i<size ; i++){
        if (arr[i]==target){
            return i;
        }

    }
return -1 ;
}
int main () {
int size ;
printf("Enter size of array : ");
scanf("%d", &size);
int arr[size] ;
printf("Enter the elements of array : ");
for(int i=0; i<size ; i++){
    scanf("%d", &arr[i]);
}
int target;
printf("Enter the element to search ");
scanf("%d",&target);
int linresult = linearSearch (arr,size,target);
if (linresult != -1){
    printf("Element found at index %d\n ", linresult);
} else {
    printf("Element not found\n");
}

    return 0;
}
