#include <stdio.h>

#define max 5

int stack[max];
int top = -1;

void push()
{
    int item;

    if(top == max - 1)
    {
        printf("\nStack is full (Overflow)");
    }
    else
    {
        printf("\nEnter the element: ");
        scanf("%d", &item);

        top++;
        stack[top] = item;

        printf("\n%d inserted successfully.", item);
    }
}

int main()
{
    push();
    push();
    push();

    return 0;
}
