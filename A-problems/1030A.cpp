#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

void solve(vi v){
    int n = v.size();
    for(int i=0;i<n;i++){
        if(v[i]){
            cout<<"HARD"<<endl;
            return;
        }
    }
    cout<<"EASY"<<endl;
    return;

}

int main() {
    int n;
    cin>>n;
    vi v(n);
    for(auto &i:v) cin>>i;
    solve(v);
    return 0;
}