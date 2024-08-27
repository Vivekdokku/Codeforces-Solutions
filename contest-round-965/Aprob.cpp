#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

void solve(ll &xc,ll &yc,ll k){
    if(k == 1){
        cout<<xc<<" "<<yc<<endl;
        return;
    }
    else{
        if(k%2==0){
            ll x1 = xc,x2 = xc,y1=yc,y2=yc;
            k=k/2;
            while(k>0){
                x1--;
                y1--;
                cout<<x1<<" "<<y1<<endl;
                x2++;
                y2++;
                cout<<x2<<" "<<y2<<endl;
                k--;
            }
            return;
        }
        else{
            ll x1 = xc,x2 = xc,y1=yc,y2=yc;
            ll xs =0,ys = 0;
            ll k1 = k;
            k=k-1;
            while(k>0){
                x1--;  
                y1--;
                cout<<x1<<" "<<y1<<endl;
                xs+=x1;
                ys+=y1;
                k--;
            }
            x2 = x2 * k1;
            y2 = y2 * k1;
            ll ans1 = x2 - xs;
            ll ans2 = y2 - ys;
            cout<<ans1<<" "<<ans2<<endl;
            return;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll x,y,k;
        cin>>x>>y>>k;
        solve(x,y,k);
    }
    return 0;
}