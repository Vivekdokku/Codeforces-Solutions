#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

void solve(vll v,int n){
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[v[i]] = i;
    }
    unordered_set<int>s;
    for(auto i:mp){
        s.insert(i.second);
    }
    if(s.size()<3){
        cout<<-1<<' '<<-1<<" "<<-1<<endl;
        return;
    }
    else{
        int j=1;
        for(auto i:mp){
            cout<<i.second+1<<" ";
            j++;
            if(j==4) return;
        }
    }

}

int main() {
    int n;
    cin >> n;
    vll v(n);
    for(auto &i:v){
        cin >> i;
    }
    solve(v,n);
    return 0;
}