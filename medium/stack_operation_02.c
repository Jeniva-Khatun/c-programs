// pop elements
#include<stdio.h>
    #define SIZE 4

    int stack[SIZE];
    int top= -1;


    int stack_full(){
        return top == SIZE-1;
    }
    int stack_empty(){
        return top == -1;
    }

    void push (int element ){
        if (stack_full()){
            printf("Stack overflow");
           return ;
        }
        stack[++top] = element ;

    }

int pop (){
    if (stack_empty()){
        printf("stack underflow");
        return -1;
    }
 return   stack[top--];
}
void display (){
    if (stack_empty()){
        printf("stack underflow");
    }
    else {
        printf("stack top to bottom: ");
        for (int i=top; i>= 0; i--){
            printf("%d\n", stack[i]);
        }
    }
}

int main (){

    push(12);
    push(20);
    display();

    pop();
    display();
    pop();
    display();
printf("\n");
    return 0;
}
