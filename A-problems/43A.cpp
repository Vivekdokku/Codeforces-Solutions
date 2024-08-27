#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    unordered_map<string,ll>mp;
    ll mx = 0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        mp[s]++;
        mx = max(mx,mp[s]);
    }
    for(auto it:mp){
        if(it.second == mx){
            cout<<it.first<<endl;
            break;
        }
    }
    
    return 0;
}