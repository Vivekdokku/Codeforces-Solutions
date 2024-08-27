#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

bool solve(ll n,vll v,string s){
    ll len = s.size();
    if(n!=len) return false;
    
    unordered_map<char,ll>mp;
    for(ll i=0;i<n;i++){
        if(mp.find(s[i])!=mp.end()){
            if(mp[s[i]]!=v[i]) return false;
        }
        mp[s[i]]=v[i];
    }
    unordered_map<ll,char>mp1;
    for(ll i=0;i<n;i++){
        if(mp1.find(v[i])!=mp1.end()){
            if(mp1[v[i]]!=s[i]) return false;
        }
        mp1[v[i]]=s[i];
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
        ll m;
        cin>>m;
        while(m--){
            string s;
            cin>>s;
            bool ans = solve(n,v,s);
            if(ans) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;

        }
    }
    return 0;
}




// #include <bits/stdc++.h>

// using namespace std;

// #ifdef LOCAL
// #include "algo/debug.h"
// #else
// #define debug(...) 42
// #endif

// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);
//   int tt;
//   cin >> tt;
//   while (tt--) {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//       cin >> a[i];
//     }
//     string s;
//     cin >> s;
//     vector<int> coeff(n, n + 1);
//     {
//       int cnt = 0;
//       for (int i = 0; i < n; i++) {
//         cnt += (s[i] == 'L');
//         coeff[i] = min(coeff[i], cnt);
//       }
//     }
//     {
//       int cnt = 0;
//       for (int i = n - 1; i >= 0; i--) {
//         cnt += (s[i] == 'R');
//         coeff[i] = min(coeff[i], cnt);
//       }
//     }
//     int64_t ans = 0;
//     for (int i = 0; i < n; i++) {
//       ans += int64_t(coeff[i]) * a[i];
//     }
//     cout << ans << '\n';
//   }
//   return 0;
// }
