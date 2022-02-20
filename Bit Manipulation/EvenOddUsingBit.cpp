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
    fastio
    int n;
    cin>>n;
    if(n&1)
    cout<<"Odd\n";
    else 
    cout<<"Even\n";
        return 0;
}