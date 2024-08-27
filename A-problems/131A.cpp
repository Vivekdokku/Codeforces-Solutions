#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

bool iscap(string s){
    for(auto i:s){
        if(islower(i))
        return false;
    }
    return true;
}

bool isacc(string s){
    for(int i=0;i<s.size();i++){
        if(i==0 ){
            if(isupper(s[i]))
            return false;
        }
        else{

            if(islower(s[i]))
            return false;
        }
        
    }
    return true;
}



int main() {
    
    string s;
    cin>>s;
    int n = s.size();

    if(s.size()==0){
        cout<<s<<endl;
    }
    else if(iscap(s)){
        for(int i=0;i<n;i++){
            s[i] = tolower(s[i]);
    
        }
        cout<<s<<endl;
    }
    else if(isacc(s)){
        s[0] = toupper(s[0]);
        for(int i=1;i<n;i++) s[i] = tolower(s[i]);
        cout<<s<<endl;
    }
    else{
        cout<<s<<endl;
    }


    return 0;
}