#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

ll solve(vll v,ll k){
    ll n = v.size();
    if(n==1) return 0;
    ll c = 1;
    ll mx = 1;
    sort(v.begin(),v.end());
    for(ll i=1;i<n;i++){
        if(v[i]-v[i-1]<=k){
            c++;
            mx = max(mx,c);
        }else{
            c = 1;
        }
    }
    return n-mx;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) {
        ll n,k;
        cin>>n>>k;
        vll v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        ll ans = solve(v,k);
        cout<<ans<<endl;
    }
    return 0;
}