#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    vs v;
    string ans = "";
    ll n = s.size();
    ll i=0;
    while(i<n){
        if(i>=0 && i<n-2 && s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i+=3;
            if(!ans.empty()) v.push_back(ans);
            ans = "";
        }
        else{
            ans+=s[i];
            i++;
        }
    }
    if(!ans.empty()) v.push_back(ans);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}