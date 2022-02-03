#include <bits/stdc++.h>
using namespace std;
int firstOccurence(int a[], int n, int key)
{
    int mid = 0, first = 0, last = n;
    mid = (first + last) / 2;
    int ans = -1;
    while (first <= last)
    {
        if (a[mid] == key)
        {
            ans = mid;
            last = mid - 1;
        }
        else if (key > a[mid])
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
        mid = (first + last) / 2;
    }
    return ans;
}
int lastOccurence(int a[], int n, int key)
{
    int mid = 0, first = 0, last = n;
    mid = (first + last) / 2;
    int ans = -1;
    while (first <= last)
    {
        if (a[mid] == key)
        {
            ans = mid;
            first = mid + 1;
        }
        else if (key > a[mid])
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
        mid = (first + last) / 2;
    }
    return ans;
}
int main()
{
    int a[5] = {1, 2, 3, 3, 5};
    cout << "First Index of 4 is:" << firstOccurence(a, 5, 3) << endl;
    cout << "Last index of 4 is:" << lastOccurence(a, 5, 3);
}
