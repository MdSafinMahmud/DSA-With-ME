#include <stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack is Overflow!!\n");
    }
    else
    {
        top++;
        stack[top] = value;
        printf("%d is pushed into stack.\n", value);
    }
}

void pop()
{
    if (top == -1)
    {
        print("Stack is underflow!!");
    }
    else
    {
        printf("%d popped from stack.\n", stack[top]);
        top--;
    }
}

void peek()
{
    if (top == -1)
        printf("Stack is empty!\n", );
    else
    {
        printf("Top element is : %d\n", stack[top]);
    }
}
void display()
{
    if (top == -1)
    {
        printf("Stack is empty!\n");
    }
    else
    {
        printf("Stack ellements are:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d \n", stack[i]);
        }
    }
}
int main()
{
    int choice;
    while (1)
    {
        printf("\nStack Menu.");
        printf("1.PUSH\n");
        printf("2.POP\n");
        printf("3.PEEK\n");
        printf("4.DISPLAY\n");
        printf("5.EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(chocie)
        {
            case 1:
            printf("Enter")
        }
    }
    return 0;
}