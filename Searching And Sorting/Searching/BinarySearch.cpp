#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5], key, flag = 0, n;
    int mid, first = 0, last = 4;
    cout << "Enter 5 Values" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    int count = 1;
    while (count < n)
    {
        for (int i = 0; i < n - count; i++)
        {
            if (a[i] > a[i + 1])
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
        count++;
    }
    cout << "enter Key to find" << endl;
    cin >> key;
    mid = (first + last) / 2;
    while (first <= last)
    {
        if (a[mid] == key)
        {
            cout << "found At Index" << mid << endl;
            break;
        }
        if (a[mid] > key)
        {
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
        mid = (first + last) / 2;
    }
    getchar();
}
