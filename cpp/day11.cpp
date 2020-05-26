#include<bits/stdc++.h>

using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int hours = (n+m)/60;
    int minutes = (n+m)%60;
    cout<<hours<<":"<<minutes;
}
