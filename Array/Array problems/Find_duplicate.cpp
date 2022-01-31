#include <bits/stdc++.h>
using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
#define ll long long;
#define pb push_back;
#define vint vector<int>;
void findDuplicate(vector<int> &arr) 
{int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];

    }
    for(int i=1;i<arr.size();i++){
        ans=ans^i;
    }
    cout<<ans;
	
}

int main(void)
{
    fastio
     int n;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        findDuplicate(v);
        return 0;
}