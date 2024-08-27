#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

bool solve(string s){
    int n = s.size();
    if(s[0]=='4') return false;
    for(int i=0;i<n;i++){
        if(s[i]!='1' && s[i]!='4')
        return false;
        if(i<n-2 && s[i]=='4' && s[i+1]=='4' && s[i+2]=='4')
        return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    bool ok = solve(s);
    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}