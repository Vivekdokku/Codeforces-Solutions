#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

ll solve(ll n){
    ll ans = 0;
    while(n>0){
        if(n>=100){
            ans+= n/100;
            n = n%100;
        }
        else if(n>=20){
            ans+= n/20;
            n = n%20;
        }
        else if(n>=10){
            ans+= n/10;
            n = n%10;
        }
        else if(n>=5){
            ans+= n/5;
            n = n%5;
        }
        else{
            ans+= n;
            n =0;
        }
    }
    return ans;
}

int main() {
    ll n;
    cin>>n;
    ll sol = solve(n);
    cout<<sol;
    return 0;
}