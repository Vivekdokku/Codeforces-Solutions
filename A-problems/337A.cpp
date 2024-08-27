#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m;
    cin>>n>>m;
    vll v(m);
    for(auto &i:v) cin>>i;
    sort(v.begin(),v.end());
    ll c=0;
    ll mn = LONG_LONG_MAX;
    for(int i = n-1;i<m;i++){
        ll diff = v[i]-v[c];
        mn = min(mn,diff);
        c++;
    }
    cout<<mn<<endl;

    return 0;
}