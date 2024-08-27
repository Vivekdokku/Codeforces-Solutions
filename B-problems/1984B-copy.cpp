#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

vi convert(ll n)
{
    vi v;
    while (n > 0)
    {
        if (n >= 10 && n < 20)
        {
            v.push_back(n);
            n = 0;
        }
        if (n != 0)
        {
            int digit = n % 10;
            v.push_back(digit);
            n /= 10;
        }
    }
    return v;
}

bool solve(vi v)
{
    for (int i = 0; i < v.size(); i++)
    {
        bool ok = false;
        for (int a = 5; a <= 9; a++)
        {
            for (int b = 5; b <= 9; b++)
            {
                if (i < (v.size() - 1))
                {
                    int sum = a + b;

                    if (sum >= 10)
                    {
                        sum = sum - 10;
                        if (sum == v[i])
                        {
                            ok = true;
                            v[i + 1] = v[i + 1] - 1;
                        
                        }
                    }
                }
                else
                {
                    int sum = a + b;
                    if (sum == v[i])
                    {
                        ok = true;
                        break;
                    }
                }
                if(ok) break;
            }
            if(ok) break;
        }
        if (!ok)
        {
            return false;
        }
    }
    return true;
}

void print(vi v)
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vi v = convert(n);
        bool ans = solve(v);
        if(ans) cout << "YES" << endl;
        else cout<< "NO"<< endl;
    }
    return 0;
}