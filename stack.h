#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct node{
    int value;
    struct node *next;
}node;

typedef struct Stack{
    node *head;
}Stack;

//operation to create a stack
void createStack(Stack *s);
//operations to check if it's full and if it's empty
bool isEmpty(Stack *s);
bool isFull(Stack *s);
//usual stack operations such as push and pop
//push operation returns true if a new element was successfully added into the stack
bool push(Stack *s,int value);
int pop(Stack *s);
//the ability to print a stack
void printStack(Stack *s);
//functions to destroy the whole stack
void destroyStack(Stack *s);

#endif // STACK_H_INCLUDED
