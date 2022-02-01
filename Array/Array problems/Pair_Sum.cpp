#include <bits/stdc++.h>
using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
#define ll long long;
#define pb push_back;
#define vint vector<int>;
int main(void)
{
    fastio int n;
    cin >> n;
    int arr[n];
    int s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            if (arr[i] + arr[j] == s)
                cout << arr[i] << arr[j] << endl;
        }
    }
    return 0;
}