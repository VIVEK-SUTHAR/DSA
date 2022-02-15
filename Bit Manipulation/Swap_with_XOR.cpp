#include <bits/stdc++.h>
using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
#define ll long long;
#define pb push_back;
#define vint vector<int>;
void swap_with_xor(int *n1, int *n2)
{
    *n1 = *n1 ^ *n2;
    *n2 = *n1 ^ *n2;
    *n1 = *n1 ^ *n2;
    cout << *n1 << " " << *n2;
}
int main(void)
{
    fastio 
    int n1, n2;
    cin >> n1 >> n2;
    swap_with_xor(&n1, &n2);
    return 0;
}