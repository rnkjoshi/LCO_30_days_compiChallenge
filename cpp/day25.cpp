#include<bits/stdc++.h>
using namespace std;
bool valid(string s){
    bool upper=false,lower=false,special=false,digit=false,len=false;
    if(s.size()>=8)
        len = true;
    else
        return false;
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])){
            digit=true;
            continue;
        }
        if(isupper(s[i])){
            upper = true;
            continue;
        }
        if(islower(s[i])){
            lower = true;
            continue;
        }
        cout<<s[i]<<" is special character\n";
        special = true;
    }
    if(upper&&lower&&digit&&special&&len)
        return true;
    else
        return false;
}
int main(){
    string s;
    while(true){
    cin>>s;
    if(valid(s))
        cout<<s<<" is valid\n";
    else
        cout<<s<<" is invalid\n";
    }
}
