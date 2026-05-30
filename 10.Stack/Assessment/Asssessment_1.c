#include <stdio.h>
#define MAX 4
int stack[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX - 1)
    {
        printf("This stack is Overflow!\n");
    }
    else
    {
        top++;
        stack[top] = value;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("This stack is Underflow\n");
    }
    else
    {
        printf("Popped Element is:%d\n", stack[top]);
        top--;
    }
}
void printStack()
{
    if (top == -1)
    {
        printf("Stack is EMPTY\n");
    }
    else
    {
        printf("Stack Elements:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}
void isEmpty()
{
    if (top == -1)
    {
        printf("Stack is EMPTY\n");
    }
    else
    {
        printf("Stack isn't EMPTY\n");
    } 
}
int main()
{
    push(20);
    push(40);
    push(60);
    printStack();
    pop();
    pop();
    printStack();
    isEmpty();
    printf("Stack Operations Completed!!");
    return 0;
}