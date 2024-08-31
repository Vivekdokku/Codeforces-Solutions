#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

void viveksolve(){
    ll l,r;
    cin>>l>>r;
    if(l%2==0) l++;
    ll ans = (r-l+2)/4;
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) {
        viveksolve();
    }
    return 0;
}