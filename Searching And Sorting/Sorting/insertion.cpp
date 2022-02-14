#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 1; j < n; j++)
    {
        int key = arr[j];
        int i = j - 1;
        while (arr[i] > key && i >= 0)
        {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = key;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
}