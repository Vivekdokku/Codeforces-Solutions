#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin>>n;
        string s = to_string(n);
        ll m = s.size();
        if(n<=100){
            cout << "No" << endl;
        }
        else if(s[0]!='1'){
            cout << "No" << endl;
        }
        else if(s[1]!='0'){
            cout << "No" << endl;
        }
        else if(s[2]=='0'){
            cout<<"No"<<endl;
        }
        else if(s[2]=='1' && m<4){
            cout << "No" << endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}