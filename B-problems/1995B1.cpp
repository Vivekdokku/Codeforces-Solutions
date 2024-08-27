#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;

ll solve(vll v, ll m, ll n)
{

    sort(v.begin(), v.end());
    ll i = 0;
    ll left = 0;
    ll cs = 0;
    ll ms = 0;
    while (i < n && left < n)
    {
        if ((v[i] - v[left]) < 2)
        {
            
            if ((cs + v[i]) <= m)
            {
                cs += v[i];
                i++;
            }
            else{
                cs -= v[left];
                left++;
            }
            ms = max(ms, cs);
            
        }
        else
        {
            cs -= v[left];
            left++;
        }
    }
    return ms;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vll v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll sol = solve(v, m, n);
        cout << sol << endl;
    }
    return 0;
}