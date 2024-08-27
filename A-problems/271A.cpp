#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

bool isans(int n){
    unordered_map<int,int>mp;
    while(n>0){
        int x = n%10;
        mp[x]++;
        if(mp[x]>1){
            return false;
        }
        n/=10;
    }
    return true;

}

void solve(int n){
    int n1 = n+9000;
    for(int i = n+1;i<=n1;i++){
        if(isans(i)){
            cout<<i<<endl;
            return;
        }
    }
    return;
}

int main() {
    int n;
    cin>>n;
    solve(n);
    return 0;

}