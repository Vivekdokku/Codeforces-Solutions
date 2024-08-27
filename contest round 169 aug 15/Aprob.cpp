#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<long long> vll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vll v(n);
        for (auto &i : v)
        {
            cin >> i;
        }
        sort(v.begin(), v.end());

        // If there are only 2 elements, just check the difference
        if (n == 2)
        {
            if (v[1] - v[0] < 2)
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
            continue;
        }

        // Calculate the minimum allowable differences for each element
        vll v1(n);
        v1[0] = v[1] - v[0];
        v1[n - 1] = v[n - 1] - v[n - 2];
        unordered_map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            mp[v[i]]++;
        }
        for (ll i = 1; i < n - 1; i++)
        {
            v1[i] = min(v[i + 1] - v[i], v[i] - v[i - 1]);
        }

        bool ok = false;
        for (ll i = v[0]; i <= v[n - 1]; i++)
        {
            if (mp.find(i) == mp.end())
            {
                bool valid = true;
                for (ll j = 0; j < n; j++)
                {
                    if (abs(i - v[j]) > v1[j])
                    {
                        valid = false;
                        break;
                    }
                }
                if (valid)
                {
                    ok = true;
                    break;
                }
            }
        }

        if (ok)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
