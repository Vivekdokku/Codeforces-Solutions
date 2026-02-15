#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

void viveksolve(){
    int n;
    cin >> n;
    char a[n][4];
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];
        }
    }
    for(int i = n-1;i>=0;i--){
        for(int j = 0;j<4;j++){
            if(a[i][j]=='#'){
                cout<<j+1<<" ";
            }
        }
    }
    cout<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) {
        viveksolve();
    }
    return 0;
}