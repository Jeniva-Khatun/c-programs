


#include<stdio.h>
int main (){

    int size;
    int arr[size];
    int index ;

printf("Enter size of array : ");
scanf("%d", &size);


printf("enter array elements : ");
for(int i=0; i<size; i++){
    scanf("%d", &arr[i]);
}

index = 0 ;

if(index<0 || index >=size ){
   return printf("user have entered invalid index");
}
int deletevalue = arr[index];

for(int i = index; i<size-1 ; i++){
    arr[i]=arr[i+1];
}
size--;
printf("After deleting element : ");
for(int i = 0 ; i<size ; i++){
    printf("%d ",arr[i]);
}
printf("\n%d deleted from index %d\n", deletevalue ,index);
printf("\n");
    return 0;
}
