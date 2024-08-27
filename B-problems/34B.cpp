#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m;
    cin>>n>>m;
    vll v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    vll ans;
    for(ll i=0;i<n;i++) {
        if(v[i]<0){
            ans.push_back(abs(v[i]));
        }
    }
    sort(ans.begin(),ans.end(),greater<int>());
    ll sol = 0;
    ll j=0;
    for(ll i=0;i<ans.size();i++){
        sol+=ans[i];
        j++;
        if(j==m) break;
    }
    cout<<sol<<endl;

    return 0;
}