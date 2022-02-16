#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Array Size"
         << "\n";
    cin >> n;
    int ar[n];
    cout << "Enter " << n << " Elements"
         << "\n";
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int count = 1;
    while (count < n)
    {
        for (int i = 0; i < n - count; i++)
        {
            if (ar[i] > ar[i + 1])
            {
                int temp = ar[i];
                ar[i] = ar[i + 1];
                ar[i + 1] = temp;
                // swap(ar[i],ar[i+1]); Buite In Function
            }
        }
        count++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}