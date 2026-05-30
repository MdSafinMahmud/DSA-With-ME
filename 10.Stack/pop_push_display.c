#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;
void push()
{
    int value;
    if (top == MAX - 1)
    {
        printf("Stack Overflow.\n");
    }
    else
    {
        printf("Enter Value: ");
        scanf("%d", &value);
        top++;
        stack[top] = value;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("\nStack Underflow! Nothing to pop");
    }
    else
    {
        printf("%d popped from stack.\n", stack[top]);
        top--;
    }
}
void display()
{
    if (top == -1)
    {
        printf("\nStack is empty.\n");
    }
    else
    {
        printf("Stack element (Top to Bottom):\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}
int main()
{
    int choice;
    while (1)
    {
        printf("\nStack Menu\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        default:
            printf("Invalid choice\n");
        }
    }
}