#include <bits/stdc++.h>
using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
#define ll long long;
#define pb push_back;
#define vint vector<int>;
void findUnique(int *arr, int size)
{
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    cout<<ans;
}
int main(void)
{
    fastio
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        findUnique(arr,n);
        return 0;
}