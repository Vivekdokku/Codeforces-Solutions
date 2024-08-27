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
        ll n;
        cin >> n;
        vll v(n);
        for (int i = 0; i < n; i++) cin>>v[i];
        sort(v.begin(), v.end());
        cout<<v[n/2]<<endl;
    }
    return 0;
}