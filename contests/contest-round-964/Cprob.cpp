#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<long long>> vvll;
typedef vector<string> vs;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n, s, m;
        cin >> n >> s >> m;

        vvll v(n, vll(2));
        for (int i = 0; i < n; i++)
        {
            cin >> v[i][0] >> v[i][1];
        }

        ll a = 0, b = v[0][0];
        bool ok = false;
        if ((b - a) >= s)
        {
            cout << "Yes" << endl;
            ok = true;
        }

        if (!ok)
        {

            for (int i = 1; i < n; i++)
            {
                a = v[i - 1][1];
                b = v[i][0];

                if (b - a >= s)
                {
                    cout << "Yes" << endl;
                    ok = true;
                    break;
                }
            }
        }

        // Check the last interval up to the value 'm'
        if (!ok)
        {
            a = v[n - 1][1];
            b = m;

            if (b - a >= s)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}
