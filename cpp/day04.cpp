#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int counter=0,temp=n;
    while(temp <= m){
        temp += n;
        counter++;
    }
    cout<<counter;
    return 0;
}
