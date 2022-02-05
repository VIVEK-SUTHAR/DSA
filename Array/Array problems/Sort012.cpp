#include <bits/stdc++.h>
using namespace std;
void sort012(int arr[], int size)
{
    int low = 0, mid = 0, high = size - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low++], arr[mid++]);
        }
        else if (arr[mid] == 1)
            mid++;
        else
        {
            swap(arr[high], arr[mid]);
            high--;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main(void)
{
    int n;
    cout << "Enter Size of Array"
         << "\n";
    cin >> n;
    int ar[n];
    cout << "Enter" << n << " Elements Conatininh 0 1 2"
         << "\n";
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    sort012(ar, n);
}
/*Author Vivek Suthar*/