#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void viveksolve() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    ll mx = -1;  

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx,a[i]);
    }

    while (m--) {
        char c;
        ll l, r;
        cin >> c >> l >> r;

        if (c == '+' && (mx>=l && mx<=r)) {
            mx++;
        }
        if(c=='-' && (mx>=l && mx<=r)){
            mx--;
        }

        cout<<mx<<" ";
    }
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        viveksolve();
    }
    return 0;
}
