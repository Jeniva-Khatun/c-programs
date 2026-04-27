#include<stdio.h>
int main (){
    int num,sum=0 ;
    printf("Enter the number :");
    scanf("%d",&num);
    int temp = num;
    while (num!=0){
        int digit = num%10;
        sum=sum+digit*digit*digit;
        num=num/10;
    }
    if (sum==temp){
        printf("Number is armstrong\n");
    } else {
        printf("Number is not armstrong\n");
    }
    return 0;
}
