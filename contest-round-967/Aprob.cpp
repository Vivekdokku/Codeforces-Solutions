#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

ll solve(vll v,ll n){
    if(n==1) return 0;
    unordered_map<ll,ll>mp;
    ll mx = 0;
    for(ll i=0;i<n;i++){
        mp[v[i]]++;
        mx = max(mx,mp[v[i]]);
    }
    return n-mx;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin>>n;
        vll v(n);
        for(int i = 0; i < n; i++) cin>>v[i];
        ll ans = solve(v,n);
        cout<<ans<<endl;
    }
    return 0;
}