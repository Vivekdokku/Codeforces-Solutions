#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

string solve(ll n,ll t){
    string ans = "";
    if (t == 10 && n == 1) {
        return "-1";
    } else if (t == 10) {
        ans+="1";
        for (int i = 0; i < n - 1; i++) {
            ans+="0";
        }
    } else {
        for (int i = 0; i < n; i++) {
            ans+=to_string(t);
        }
        
    }
    if(ans.empty()) return "-1";
    else return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,t;
    cin>>n>>t;
    string ans = solve(n,t);
    cout<<ans<<endl;
    return 0;
}