#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int n = s.size();
    int islowercount = 0;
    for(int i=0;i<n;i++){
        if(islower(s[i])) islowercount++;
    }
    int isuppercount = n-islowercount;
    if(islowercount < isuppercount){
        for(int i=0;i<n;i++) {
            if(!isupper(s[i])) s[i] = toupper(s[i]);
        }
    }
    else if(islowercount < isuppercount){
        for(int i=0;i<n;i++) {
            if(!islower(s[i])) s[i] = tolower(s[i]);
        }
    }
    else{
        for(int i=0;i<n;i++) {
            if(!islower(s[i])) s[i] = tolower(s[i]);
        }
    }
    cout<<s<<endl;
    return 0;
}