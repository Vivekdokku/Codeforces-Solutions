#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<long long>> vvll;
typedef vector<long long> vll;
typedef vector<string> vs;

ll solve(vvll v,ll n,ll m,ll k){
    if(max(n-1,m-1)<k){
        return n*m;
    }
    

}

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n,m,k;
        cin>>n>>m>>k;
        vvll v(n,vll(m,0));
        ll ans = solve(v,n,m,k);
        cout<<ans<<endl;

    }
    return 0;
}