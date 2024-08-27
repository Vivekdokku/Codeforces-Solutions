#include <bits/stdc++.h>
using namespace std;

bool islucky(int num)
{
    while (num > 0)
    {
        int digit = num % 10;
        if (digit != 4 && digit != 7)
        {
            return false;
        }
        num = num / 10;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 1; i <= 1000; i++)
    {
        if (islucky(i))
            v.push_back(i);
    }
    bool ans = false;
    for (int i : v)
    {
        if (n % i == 0)
        {
            ans = true;
            break;
        }
    }

    if (ans)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}