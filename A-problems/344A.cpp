#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

ll solve(vi v, int n)
{
    if (n == 1)
    {
        return 1;
    }
    ll ans = 1;

    
    for (int i = 1; i < n; i++)
    {
        if (v[i] != v[i - 1])
            ans++;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll ans = solve(v, n);
    cout << ans << endl;
    return 0;
}