#include<bits/stdc++.h>

using namespace std;
string toBinary(int n){
    string bin="";
    while(n/2!=0){
        if(n%2==0)
            bin+='0';
        else
            bin+='1';
        n/=2;
    }
    if(n%2==1)
        bin+='1';
    return bin;

}
int main(){
    int n;
    cin>>n;
    string bin = toBinary(n);
    reverse(bin.begin(),bin.end());
    cout<<bin;
}
