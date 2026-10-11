#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

void push(int item)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = item;

        printf("%d pushed into stack\n", item);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}

void peek()
{
    if (top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Top element = %d\n", stack[top]);
    }
}

void display()
{
    int i;

    if (top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Stack elements:\n");

        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);

    display();

    peek();

    pop();

    display();

    return 0;
}