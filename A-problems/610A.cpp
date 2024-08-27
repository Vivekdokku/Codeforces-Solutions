#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    if (n % 2 != 0)
        cout << 0 << endl;
    else
    {
        n = n / 2;
        cout << (n - 1) / 2 << endl;
    }

    return 0;
}