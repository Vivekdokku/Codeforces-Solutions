#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

ll solve()
{
    ll l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if(make_pair(l1,r1) > make_pair(l2,r2)){
        swap(l1,l2);
        swap(r1,r2);
    }
    if(r1<l2) return 1;
    ll ans = min(r1,r2) - max(l1,l2);
    ans+= l1!=l2;
    ans+= r1!=r2;
    return ans;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {

        cout<<solve()<<endl;
    }
    return 0;
}