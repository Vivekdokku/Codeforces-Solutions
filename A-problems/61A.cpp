#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string n1,n2;
    cin>>n1>>n2;
    string ans = "";
    for(int i=0;i<n1.size();i++){
        int d1 = n1[i] - '0';
        int d2 = n2[i] - '0';
        int sum = d1 ^ d2;
        ans += to_string(sum);
    }

    cout<<ans<<endl;
    return 0;
}