#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

int main() {
    ll n,h;
    cin>>n>>h;
    vll v(n);
    for(auto &i:v) cin>>i;
    ll min = n;
    for(int i = 0; i < n; i++) {
        if(v[i]>h) min++;
    }
    cout<<min<<endl;
    return 0;
}