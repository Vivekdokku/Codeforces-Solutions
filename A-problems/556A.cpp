#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

ll solve(string s,ll n){
    unordered_map<ll,ll>mp;
    mp[0] = 0;
    mp[1] = 0;
    for(ll i=0;i<n;i++){
        if(s[i]=='1') mp[1]++;
        else mp[0]++;
    }
    ll mn = min(mp[0],mp[1]);
    ll ans = n-(mn*2);
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll ans = solve(s,n);
    cout<<ans<<endl;
    return 0;
}