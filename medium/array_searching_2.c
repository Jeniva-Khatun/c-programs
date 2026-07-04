//binary search
#include<stdio.h>
int main (){
int arr[4]= {1,2,3,4};
int element;
int i,mid;
int found = 0;

//print elements
printf("Array elements are = ");
for(i=0 ; i< 4; i++){
    printf("%d ", arr[i]);
}
//search for required element
printf("\nEnter element to search = ");
scanf("%d", &element );

int low = 0, high = 4;

while (low <= high) {
mid =( low + high)/2;

   if (arr[mid] == element){
       printf("Element found at index = %d\n", mid );
       found = 1;
       break;
   }
   else if (element < arr[mid]){
       high = mid-1;
   }
else {
    low = mid + 1;
  }
}
if (found == 0) {
    printf("Element not found");
}
printf("\n");

return 0 ;

}
