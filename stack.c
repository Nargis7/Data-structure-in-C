// #include<limits.h>
#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    unsigned capacity;
    int* array;
};
struct stack* createStack(unsigned capacity)
{
    struct stack* stack=(struct stack*)malloc(sizeof(struct stack));
    stack->capacity=capacity;
    stack->top=-1;
    stack->array=(int*)malloc(stack->capacity*sizeof(int));
    return stack;
}
// function to check if the stack is full
int isFull(struct stack* stack)
{
    return stack->top==stack->capacity-1;
}
// function to check if the stack is empty
int isEmpty(struct stack* stack)
{
    return stack->top==-1;
}
// push operation
void push(struct stack* stack,int value)
{
    if(isFull(stack))
    {
        printf("stack overflow\n");
    }else{
        // increment top and add the value to the top of the stack
        stack->top++;
        stack->array[stack->top]=value;
        printf("pushed %d onto the stack\n",value);
    }
}
    // function to pop an element from the stack
    // Function to pop an element from the stack
int pop(struct stack* stack)
    {
        // check for stack underflow
        if(isEmpty(stack))
        {
            printf("stack underflow\n");
            return -1;
        }
        // return the top element
        int data = stack->array[stack->top];
        // decrement top pointer
        stack->top--;
        printf("popped %d from the stack\n",data);
        // return the popped element
        return data;
    }
int main(){
    struct stack*  stack= createStack(100);
    push(stack,10);
    push(stack,20);
    push(stack,30);

    printf("%d popped from stack \n",pop(stack));
    return 0;
}
