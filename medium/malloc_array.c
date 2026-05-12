#include<stdio.h>
#include<stdlib.h>
int main (){
int n , i ;
printf("Enter n: ");
scanf("%d", &n );
int *arr = (int *)malloc(n * sizeof(int));
if (arr == NULL){
    printf("memory allocation failed ");
    return 1;

} printf("Enter elements : ");
for (i =0;i<n;i++){
    scanf("%d", &arr[i] );
}
for ( i = 0 ; i<n ; i++) {
    printf("%d " , arr[i]);
}
free (arr) ;


    return 0;
}
