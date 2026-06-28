#include<stdio.h>
int main(){
    char name[30];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Your name is %s\n", name);

    return 0 ;
}
