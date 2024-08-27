#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) {
        ll x,y;
        cin >> x >> y;
        ll a,b;
        cin >> a >> b;
        ll min1 = (x+y)*a;
        ll min2 = min(x,y)*b + abs(x-y)*a;
        cout << min(min1,min2) << endl;
    }
    return 0;
}