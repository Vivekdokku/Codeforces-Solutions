#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

bool solve(vll v,ll n){
    sort(v.begin(),v.end());
    ll maxdiff = 0;
    if(n==1) return true;
    for(int i=1;i<n;i++){
        maxdiff = max(maxdiff,v[i]-v[i-1]);
    }
    if(maxdiff > 1){
        return false;
    }
    else{
        return true;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vll v(n);
        for (int i = 0; i < n; i++) cin>>v[i];
        bool ans = solve(v,n);
        cout << (ans ? "YES" : "NO") << endl;
    }
    return 0;
}