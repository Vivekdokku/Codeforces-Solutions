#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

void solve(ll n){
    if(n%2==0){
        ll ans = n/2;
        cout << ans<<endl;
        return;
    }
    else{
        ll ans = -((n+1)/2);
        cout<<ans<<endl;
        return;
    }
}

int main() {
    ll n;
    cin>>n;
    solve(n);
    return 0;
}