// SELECTION SORT
#include <iostream>
using namespace std;
void line()
{
    cout << "\n-------------------------------------------------";
}
int main()
{
    int n;
    cout << "Enter Array Size\n";
    cin >> n;
    cout << "Enter " << n << "Elements\n";
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    line();
    cout << "\nSorted Array in Increasing Order::";
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    line();
    line();
    cout << "\nSorted Array in Decreasing Order::";
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > a[i])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout <<a[i];
    }
    line();
}
