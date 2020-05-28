#include<bits/stdc++.h>

using namespace std;
int gcd(int x,int y){
    return (y!=0)?gcd(y,x%y):x;
}
int main(){
    int n,m;
    cin>>n>>m;
    int result = gcd(n,m);
    cout<<n/result<<"/"<<m/result;
    return 0;
}
