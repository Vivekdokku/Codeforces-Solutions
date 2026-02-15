#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll ans = 0;
    ll n,x;
    cin>>n>>x;
    for(ll i=1;i<=n;i++){
        if(x%i==0){
            ll a = x/i;
            if(a>=1 && a<=n){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}