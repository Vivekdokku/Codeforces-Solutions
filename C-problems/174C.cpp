#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

ll solve(ll n, string s)
{
    ll ans = 0;
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ')')
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop(); // Pop the matching '(' from the stack
            }
            else
            {
                ans++; // Unmatched ')', so it adds to the imbalance
            }
        }
        else
        {
            st.push(s[i]); // Push the '(' onto the stack
        }
    }
    return ans;
}

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
        string s;
        cin >> s;
        ll ans = solve(n, s);
        cout << ans << endl;
    }
    return 0;
}