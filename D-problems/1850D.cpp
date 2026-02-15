#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

ll solve(vll v,ll k){
    ll n = v.size();
    if(n==1) return 0;
    ll c = 1;
    ll mx = 1;
    sort(v.begin(),v.end());
    for(ll i=1;i<n;i++){
        if(v[i]-v[i-1]<=k){
            c++;
            mx = max(mx,c);
        }else{
            c = 1;
        }
    }
    return n-mx;
}

int main() {
    int a[30],c=0;
    for(int i=0 ;i<30;i++){
        a[i]=29-i; 
    }
    for(int i=0;i<=29;i++){
        for(int j=0;j<=30-i-2;j++){
            if(a[j]>a[j+1]) {
                
                swap(a[j],a[j+1]);
                c++;
                }
        }
    }
    cout<<c<<endl;
}