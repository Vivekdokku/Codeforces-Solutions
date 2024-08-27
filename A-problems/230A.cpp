#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;


bool solve(ll s,map<ll,ll>mp){
    for(auto i:mp){
        if(s<=i.first){
            return false;
        }
        else{
            s+=i.second;
        }
    }
    return true;
}

int main() {
    ll s,n;
    cin>>s>>n;
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        if(mp.find(a)==mp.end()){
            mp[a]=b;
        }
        else{
            mp[a] +=b;
        }
    }
    if(solve(s,mp)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    

    return 0;
}