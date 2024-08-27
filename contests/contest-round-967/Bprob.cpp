#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

void solve(ll n){
    if(n%2==0){
        cout<<-1<<endl;
    }
    else{
        vector<ll>v(n);
        ll a = 0,b = n-1;
        for(ll i = 1;i<=n;i++){
            if(i%2==1){
                v[a++] = i;
            }
            else{
                v[b--] = i;
            }
        }
        for(ll i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin>>n;
        solve(n);

        
    }
    return 0;
}