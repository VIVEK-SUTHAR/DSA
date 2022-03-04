#include <bits/stdc++.h>
using namespace std;
int s[5];
int top = -1;
void push(int data)
{
    if (top < 5)
    {
        top++;
        s[top] = data;
    }
    cout << "Overflow"
         << "\n";
}
void pop()
{
    if (top == -1)
    {
        cout << "Stack is empty..\n";
    }
    else
    {
        cout << "Deleted element " << s[top] << "\n";
        top--;
    }
}
void display()
{
    if (top == -1)
        cout << "Empty Stack\n";
    for (int i = 0; i < top; i++)
    {
        cout << s[i];
    }
}
void inline peep()
{
    cout << "Top element is" << s[top];
}
bool inline isEmpty()
{
    if (top == -1)
        return true;
    else
        return false;
}
int main(void)
{
    int choice, data;
    while (true)
    {
        cout << "###############################################\n";
        cout << "             Enter your choice                  \n ";
        cout << "1.Push\n";
        cout << "2.Pop\n";
        cout << "3.Peep\n";
        cout << "4.Display\n";
        cout << "5.isEmpty\n";
        cout << "6.Exit\n";
        cout << "###############################################\n";

        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter Data to add in stack\n";
            cin >> data;
            push(data);
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
            if (isEmpty())
                cout << "Empty\n";
            else
                cout << "Not Empty\n";
            break;
        case 6:
            exit(0);
            break;
        default:
            break;
        }
    }

    cin >> choice;

    return 0;
}