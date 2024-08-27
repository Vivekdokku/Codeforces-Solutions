#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

ll solve(ll l, ll r, ll L, ll R)
{
    if (L>=r || l>=R) {
        // Non-overlapping segments
        return 1;
    } 
    else if(l==L && r == R){
        return r-l;
    }
    else if((l>L && r<R) || (L>l && R<r) ){
        return (min(r,R)-max(l,L))+2;
    }
    else {
        // Overlapping segments
        return min(r, R) - max(l, L) + 1;
    }
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        ll L, R;
        cin >> L >> R;
        ll ans = solve(l, r, L, R);
        cout << ans << endl;
    }
    return 0;
}