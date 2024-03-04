#include "stack.h"
#define STACK_EMPTY INT_MIN

void createStack(Stack *s){
    s->head=NULL;
}

bool push(Stack *s,int value){
    node *newnode = malloc(sizeof(node));
    if(newnode == NULL) return false;
    newnode->value = value;
    newnode->next = s->head;
    s->head = newnode;
    return true;
}
int pop(Stack *s){
    if(s->head == NULL) return STACK_EMPTY;
    int result = s->head->value;
    node *tmp = s->head;
    s->head = s->head->next;
    free(tmp);
    return result;
}

void printStack(Stack *s)
{
    node *current = s->head;
    while(current!=NULL){
        printf("%d\n",current->value);
        current = current->next;
    }
    printf("\n");
}
bool isEmpty(Stack *s){
    if(s->head != NULL) return false;
    else return true;
}

bool isFull(Stack *s){
    node *tryNode = malloc(sizeof(node));
    if(tryNode == NULL){
        return true;
    }
    free(tryNode);
    return false;
}
void destroyStack(Stack *s){
    while (s->head != NULL){
            pop(s);
        }
}

