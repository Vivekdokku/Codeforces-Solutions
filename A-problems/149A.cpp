#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

ll solve(vll v,ll k){
    if(k==0) return 0;
    ll ans=0;
    sort(v.begin(),v.end(),greater<int>());
    ll sum = 0;
    for(int i=0;i<12;i++) sum+=v[i];
    if(sum<k) return -1;
    int i = 0;
    int c =0;
    while(ans<k){
        ans+=v[i];
        i++;
        c++;
    }
    return c;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll k;
    cin>>k;
    vll v(12);
    for(int i=0;i<12;i++) cin>>v[i];
    ll ans = solve(v,k);
    cout<<ans<<endl;
    return 0;
}