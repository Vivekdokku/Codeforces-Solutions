#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

int main() {
    int t;
    cin >> t;
    ll s = 0;
    while(t--) {
        ll p,q;
        cin >> p >> q;
        if(q-p >= 2) s++;
    }
    cout << s << endl;
    return 0;
}