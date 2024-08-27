#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;
#define srt(v) std::sort(v.begin(), v.end())
#define srtdown(v) std::sort(v.begin(), v.end(), std::greater< decltype(v[0]) >())

ll solve(vll v ,ll n){
    ll sol = 0;
    srtdown(v);
    ll total = 0;
    for(int i = 0 ; i < n ; i++){
        total+=v[i];
    }
    ll k =0;
    while(sol<=total && k<n){
        sol+=v[k];
        total-=v[k];
        k++;
    }
    if(sol <= total) return 0;
    else return k;


}

int main() {
    ll n;
    cin >> n;
    vll v(n);
    for(auto &i:v) cin>>i;
    ll ans = solve(v,n);
    cout<<ans<<endl;


    
    return 0;
}