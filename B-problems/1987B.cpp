#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;

void print(ll n){
    cout<<n<<endl;
}
void print(vi v){
    int n = v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
// Function to check if the vector is sorted
bool issorted(const vi &v) {
    int n = v.size();
    for (int i = 1; i < n; i++) {
        if (v[i] < v[i - 1])
            return false;
    }
    return true;
}

// Function to calculate the minimum number of moves to sort the vector
ll solve(const vi &v) {
    int n = v.size();
    int mx = v[0];
    vi v1;

    for (int i = 1; i < n; i++) {
        if (v[i] < mx) {
            int diff = mx - v[i];
            v1.push_back(diff);
        } else {
            mx = v[i];
        }
    }

    int k = v1.size() + 1;
    sort(v1.begin(), v1.end());
    if (v1.empty()) return 0;

    
    ll ans = 0;
    ll sub = 0;

    for (int i = 0; i < v1.size(); i++) {
        ans += ((k - i) * (v1[i]-sub));
        sub = v1[i];
    }
    

    return ans;
}

int main() {
    ios::sync_with_stdio(false); // Fast I/O
    cin.tie(nullptr); // Untie cin from cout

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        if (issorted(v)) {
            cout << 0 << endl;
        } else {
            ll sol = solve(v);
            print(sol);
        }
    }
    return 0;
}
