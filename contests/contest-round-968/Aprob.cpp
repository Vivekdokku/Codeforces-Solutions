#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;


bool solve(string s,ll n){
    unordered_map<char,ll>mp;
    ll mx = 0;
    for(ll i=0;i<n;i++){
        mp[s[i]]++;
        mx = max(mx,mp[s[i]]);
    }
    if(mx == 1) return true;
    if(s[0]==s[n-1]) return false;
    return true;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        bool ans = solve(s,n);
        if(ans) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}