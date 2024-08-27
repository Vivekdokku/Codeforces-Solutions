#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ac = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='A') ac++;
    }
    int dc = n - ac;
    if(ac > dc) cout<<"Anton"<<endl;
    else if(ac < dc) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
    return 0;
}