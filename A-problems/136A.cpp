#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vll p(n);

    for (auto &i : p) cin >> i;

    unordered_map<ll, ll> mp;
    for (ll i = 0; i < n; ++i) {
        mp[p[i]] = i + 1;
    }

    vll ans(n + 1);
    for (ll i = 1; i <= n; ++i) {
        ans[i] = mp[i];
    }

    for (ll i = 1; i <= n; ++i) {
        cout << ans[i] << " ";
    }
    return 0;
}
