#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

ll solve(ll n,ll m,vll v){
    if(m==1) return v[0]-1;
    ll st = v[0];
    ll dis = v[0]-1;
    for(int i=1;i<m;i++){
        if(v[i]>=v[i-1]){
            dis+=(v[i]-v[i-1]);
        }
        else{
            dis+=(n-v[i-1]);
            dis+=1;
            dis+=(v[i]-1);
        }
    }
    return dis;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m;
    cin>>n>>m;
    vll v(m);
    for(int i=0;i<m;i++) cin>>v[i];
    ll ans = solve(n,m,v);
    cout<<ans<<endl;
    
    return 0;
}