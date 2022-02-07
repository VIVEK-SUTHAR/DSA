#include <bits/stdc++.h>
using namespace std;
bool isPossible(int arr[], int n, int m, int mid)
{
    int studentCount = 1, pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
            pageSum = pageSum + arr[i];
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = pageSum + arr[i];
        }
    }
    return true;
}
void allocateBooks(int arr[], int n, int m)
{
    int s = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    cout << ans;
}

int main(void)
{
    int n, m;
    cout << "Enter Array Size And Number Of Students:\n";
    cin >> n >> m;
    int arr[n];
    cout << "Enter " << n << " Elements\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    allocateBooks(arr, n, m);
}