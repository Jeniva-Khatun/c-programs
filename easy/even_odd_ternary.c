#include<stdio.h>
int main (){
    int a;
    printf("Enter a no. to check if it is even or odd : ");
    scanf("%d", &a);
(a&1)?printf("odd\n"):printf("even\n");

    return 0;
}
