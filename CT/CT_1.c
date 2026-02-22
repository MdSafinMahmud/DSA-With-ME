#include <stdio.h>
#define MAX 8

char stack[MAX];
int top = -1;

void push(char item)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow.\n");
        return;
    }
    top++;
    stack[top] = item;
}
char pop()
{
    if (top == -1)
    {
        printf("Stack Underflow.\n");
        return '\0';
    }
    char item = stack[top];
    top--;
    return item;
}
void display()
{
    int i;
    printf("Stack: ");
    for (i = 0; i <= top; i++)
    {
        printf("%c", stack[i]);
    }
}
int main()
{
    push('H');
    push('J');
    push('K');
    push('L');
    push('M');

    pop();
    pop();
    push('N');
    push('P');
    push('Q');
    pop();
    push('R');
    display();
    return 0;
}