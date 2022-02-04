#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int first, int last, int key)
{
    int mid = (first + last) / 2;
    while (first <= last)
    {
        if (a[mid] == key)
        {
            return mid;
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
    return -1;
}

int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] > arr[0])
        {
            s = mid + 1;
        }
        else
            e = mid;

        mid = s + (e - s) / 2;
    }
    return s;
}
int findIndex(int ar[], int n, int k)
{
    int pivot = getPivot(ar, n);
    if (k >= ar[pivot] && k <= ar[n - 1])
    {
        return binarySearch(ar, pivot, n - 1, k);
    }
    else
    {
        return binarySearch(ar, 0, pivot - 1, k);
    }
}
int main(void)
{
    int arr[5] = {7, 9, 1, 2, 3};

    cout << findIndex(arr, 5, 7);
}