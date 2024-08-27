#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    int t[n];
    for (int i = 1; i < n; i++) {
        cin >> t[i];
    }
    
    int position = 1;
    while (position < m) {
        position += t[position];
    }
    
    if (position == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
