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
    vll v(n);
    for(auto &i:v) cin>>i;
    ll i=1;
    ll c = 1;
    ll mx = 1;
    while(i<n){
        if(v[i]>=v[i-1]){
            c++;
            mx = max(mx,c);
            i++;
        }
        else{
            c = 1;
            i++;
        }

    }
    cout<<mx<<endl;

    return 0;
}