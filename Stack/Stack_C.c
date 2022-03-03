#include <stdio.h>
#include <stdlib.h>
int top = -1;
int stack[5];
void push(int value)
{
    if (top < 5)
    {
        top++;
        stack[top] = value;
    }
    else
    {
        printf("\nSTACK IS FULL..");
    }
}
void pop()
{
    if (top == -1)
    {
        printf("\nSTACK IS EMPTY..");
    }
    else
    {
        printf("%d is deleted\n", stack[top]);
        top--;
    }
}
void display()
{
    if (top == -1)
        printf("\nSTACK IS EMPTY..");
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", stack[i]);
    }
}
void change()
{
    int change = 0;
    if (top == -1)
    {
        printf("\nSTACK IS EMPTY.");
    }
    printf("\nEnter number to change with %d:", stack[top]);
    scanf("%d", &change);
    stack[top] = change;
}
void peep()
{
    printf("Top element is %d", stack[top]);
}
void main()
{
    int value[5], choice;
    while (1)
    {
        printf("\n1.INSERT ELEMENT:");
        printf("\n2.DELETE ELEMENT:");
        printf("\n3.VIEW TOP ELEMENT:");
        printf("\n4.DISPLAY STACK:");
        printf("\n5.CHANGE ELEMENT");
        printf("\n6.EXIT");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nENTER ELEMENT TO ADD INTO STACK::");
            for (int i = 0; i < 5; ++i)
            {
                scanf("%d", &value[i]);
                push(value[i]);
            }
            break;
        case 2:
            pop();
            break;
        case 3:
            peep();
            break;
        case 4:
            display();
            break;
        case 5:
            change();
            break;
        case 6:
            exit(0);
        default:
            printf("\nEnter Valid Choice");
            break;
        }
    }
}