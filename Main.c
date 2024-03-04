#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define STACK_EMPTY INT_MIN

int main(){
    Stack s;
    createStack(&s);
    push(&s,34);
    push(&s,98);
    push(&s,45);
    if(isFull(&s)){
        printf("Stack is full\n");
    }
    else printf("Stack is NOT full\n");
    if(isEmpty(&s))printf("Stack is empty\n");
    else{
        printf("stack:\n");
        printStack(&s);
    }
    pop(&s);
    if(isEmpty(&s))printf("Stack is empty\n");
    else{
        printf("stack:\n");
        printStack(&s);
    }
    destroyStack(&s);
    if(isEmpty(&s))printf("Stack is empty\n");
    else{
        printf("stack:\n");
        printStack(&s);
    }
    return 0;
}
