#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

void print(vll v){
    ll n = v.size();
    for(ll i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main() {
    ll n;
    cin >> n;
    vll v(n);
    for(auto &i:v) cin>>i;
    sort(v.begin(),v.end());
    print(v);
    return 0;
}