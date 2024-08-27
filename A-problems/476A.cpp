#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,k;
    cin>>n>>k;
    int mn = INT_MAX;
    for(int i = 0 ;i<=5000;i++){
        for(int j=0;j<=10000;j++){
            if((2*i)+(1*j) > n) break;
            if((2*i)+(1*j) == n){
                if((i+j)%k == 0){
                    mn = min(mn,i+j);
                }
            }
        }
    }
    if(mn == INT_MAX) 
    cout<<-1<<endl;
    else
    cout<<mn<<endl;
    return 0;
}