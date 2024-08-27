#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int mx = INT_MIN;
    int s = a+b+c;
    mx=max(mx,s);
    s = a*b*c;
    mx=max(mx,s);
    s = (a+b)*c;
    mx=max(mx,s);
    s = a+(b*c);
    mx=max(mx,s);
    s = (a*b)+c;
    mx=max(mx,s);
    s = a*(b+c);
    mx=max(mx,s);

    cout<<mx<<endl;

    return 0;
}