#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;
#define np(ans) next_permutation(ans.begin(), ans.end())


vll solve(vll v,ll n){
    vll ans = v;
    np(ans);
    

    
    return ans;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vll v(n);
        for(auto &i:v) cin>>i;
        vll ans = solve(v,n)

    }
    return 0;
}