// linear search
#include<stdio.h>
int main (){
int arr[5]= {1,2,3,4,5};
int element;
int i;
int found = 0;

//print elements
printf("Array elements are = ");
for(i=0 ; i< 5; i++){
    printf("%d ", arr[i]);
}

//search the required element
printf("\n\nEnter element to search = ");
scanf("%d", &element);

for(i=0;i < 5 ; i++){
    if(arr[i]==element){
        printf("\nelement found at index %d", i);
        found = 1;
        break;
    }
}

if (found == 0) {
    printf("Elements not found \n");
}

printf("\n");

    return 0 ;
}
