#include <stdio.h>
#include <stdlib.h>
int front = -1, back = -1;
int q[5];
void push(int x)
{
    if (front == -1)
    {
        front++;
    }
    back++;
    q[back] = x;
}
void pop()
{
    printf("\n%d is deleted\n", q[front]);
    front++;
}
void display()
{
    for (int i = front; i <= back; i++)
    {
        printf("%d ", q[i]);
    }
    printf("\n");
}
void main()
{
    while (1)
    {
        int choice, n;
        printf("SELECT YOUR CHOICE::\n");
        printf("\n1.PUSH ELEMENT IN QUEUE");
        printf("\n2.POP ELEMENT FROM QUEUE");
        printf("\n3.PRINT ELEMRNT OF QUEUE");
        printf("\n4.EXIT");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nENTER ELEMENT TO PUSH IN QUEUE");
            scanf("%d", &n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nEnter valid choice");
            break;
        }
    }
}