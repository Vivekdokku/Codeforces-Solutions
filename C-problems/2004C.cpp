#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

void solve(){
    ll n,k;
    cin>>n>>k;
    vll v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end(),greater<int>());
    ll s = 0;
    for(ll i=1;i<n;i+=2){
        ll d = v[i-1] - v[i];
        if(d<=k){
            k-=d;
        }
        else{
            s+=(d-k);
            k=0;
        }
    }
    if(n%2!=0) s+=v[n-1];
    cout<<s<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}