#include <bits/stdc++.h>
using namespace std;

int main() {
    int k,n,w;
    cin>>k>>n>>w;
    long long s = k*((w*(w+1))/2);
    long long ans = s-n;
    if(ans>0)
    cout<<s-n<<endl;
    else
    cout<<0<<endl;
    return 0;
}