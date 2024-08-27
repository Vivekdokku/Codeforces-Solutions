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
    ll p, q;
    cin >> p;
    set<int> s;
    for (ll i = 0; i < p; i++) {
        ll d;
        cin >> d;
        s.insert(d);
    }
    cin >> q;
    for (ll i = 0; i < q; i++) {
        ll d;
        cin >> d;
        s.insert(d);
    }
    bool ok = true;
    int c = 1;
    for (auto i : s) {
        if (i != c) {
            ok = false;
            break;
        }
        else {
            c++;
            if (c > n) {
                break;
            }
        }
    }
    if(s.size()!=n) ok=false;
    cout << (ok ? "I become the guy." : "Oh, my keyboard!") << endl;
    return 0;
}
