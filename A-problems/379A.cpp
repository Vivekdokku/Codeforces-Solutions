#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

ll solve(ll &a,ll &b){
    ll ans = 0;
    ll ocarr = 0;
    while(a>0){
        ans += a;
        ll carr = ocarr;
        ocarr = a%b;
        a = (a+carr)/b;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a,b;
    cin>>a>>b;
    ll ans = solve(a,b);
    cout<<ans<<endl;
    return 0;
}