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

    int last_digit;
    if (n == 0)
    {
        last_digit = 1;
    }
    else if (n % 4 == 1)
    {
        last_digit = 8;
    }
    else if (n % 4 == 2)
    {
        last_digit = 4;
    }
    else if (n % 4 == 3)
    {
        last_digit = 2;
    }
    else
    {
        last_digit = 6;
    }

    cout << last_digit << endl;

    return 0;
}