#include<stdio.h>
int main (){
    int n,reverse=0,digit;
    printf("Enter number: ");
    scanf("%d",&n);
    int temp = n;

    while(n!=0){
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    if (temp==reverse){
        printf("Number is palindrome (%d == %d)\n",temp,reverse);
    } else {
        printf("Number is not palindrome (%d != %d)\n",temp,reverse);
    }
    return 0;
}
