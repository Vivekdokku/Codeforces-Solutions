#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

bool solve(vll v,ll n){
    if(n==1) return true;
    ll mn = v[0];
    ll mx = v[0];

    for(ll i=1;i<n;i++){
        if(abs(v[i]-mn) >1 && abs(mx - v[i])>1)
        return false;
        mn = min(mn,v[i]);
        mx = max(mx,v[i]);
    }
    return true;

}

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin>>n;
        vll v(n);
        for(auto &i:v) cin>>i;
        bool ans =solve(v,n);
        if(ans) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}