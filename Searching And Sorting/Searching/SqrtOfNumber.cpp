#include <bits/stdc++.h>
using namespace std;
/*------------------Calculates int Answer-------------
Parameters:
            int n->Number to find Sqare Root
Returns an int ans;
*/
long long int sqrt(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == n)
            return mid;
        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
/*------------------Calculates  Precison Answer-------------
Parameters:
            int n->Number to find Sqare Root
            int precision:For how many digits after . You want answer EX:63->7.9372 If precision is 4
            int tempSol:int square returned bu sqrt Function.

Returns ans in Double data type.
*/
double Precise_ans(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter Number\n";
    cin >> n;
    int temp = sqrt(n);
    cout << Precise_ans(n, 4, temp);
}