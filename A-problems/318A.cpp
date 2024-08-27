#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n, k;
    cin >> n >> k;
    
    // The number of odd numbers up to n
    ll odd_count = (n + 1) / 2;

    if (k <= odd_count) {
   
        cout << 2 * k - 1 << endl;
    } else {
        
        k -= odd_count;
        cout << 2 * k << endl;
    }

    return 0;
}
