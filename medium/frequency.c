#include<stdio.h>
int main (){
int num, digit, freq[10] = {0};
printf("Enter num : ");
scanf("%d", &num);

while (num !=0) {
    digit = num%10;
    freq[digit]++;
    num=num/10;
}
for (int i=0; i<=10 ;i++) {
    if (freq[i]!=0){
        printf("%d appears %d times\n", i, freq[i] );
    }

}

    return 0;
}
