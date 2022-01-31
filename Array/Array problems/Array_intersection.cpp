#include <bits/stdc++.h>
using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
#define vint vector<int>;
#define ll long long;
#define pb push_back;
void findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    int i = 0, j = 0;
    vector<int> ans;
    while (i < n && j < m)
    {

        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
int main(void)
{
    fastio int n, m;
    cin >> n >> m;
    vector<int> vn(n), vm(m);
    for (int i = 0; i < n; i++)
    {
        cin >> vn[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> vm[i];
    }
    findArrayIntersection(vn, n, vm, m);
    return 0;
}