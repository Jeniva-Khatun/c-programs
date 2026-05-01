#include<stdio.h>
int main (){
    int n,count;
    printf("Enter the range : ");
    scanf("%d", &n);
    for(int i=2;i<=n;i++){
        count=0;
        for(int j=1;j<=i;j++){
            if (i%j==0){
                count++;
            }
        }
        if(count==2) printf("%d is a prime number \n",i);
    }

    return 0;
}
