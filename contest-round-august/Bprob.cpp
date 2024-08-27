#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

void solve(vll a, vll b, ll n)
{
    bool ok = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i] && a[i]!=b[n-1-i]) 
        {
            ok = false;
        }
    }
    if (ok)
    {
        cout << "Bob" << endl;
        return;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     if (a[i] == b[i])
    //     {
    //         cout << "Bob" << endl;
    //         return;
    //     }
    // }

    cout << "Alice" << endl;
    return;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        vll a(n);
        vll b(n);
        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;

        solve(a, b, n);
    }
    return 0;
}