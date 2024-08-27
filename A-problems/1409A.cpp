#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

ll solve(ll a,ll b){
    if(a==b) return 0;
    if(a>b) swap(a,b);
    int k = 10;
    ll ans = 0;
    ll diff = b-a;
    while(diff>0 && k>0){
        ans+=(diff/k);
        diff = diff%k;
        k--;
    }
    return ans;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) {
        ll a,b;
        cin>>a>>b;
        ll ans = solve(a,b);
        cout<<ans<<"\n";
    }
    return 0;
}