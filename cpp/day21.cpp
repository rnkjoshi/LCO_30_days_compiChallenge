#include<bits/stdc++.h>

using namespace std;
void solve(int n){
    int num=0;
    while(n > 0){
        num += n%10;
        n/=10;
    }
    cout<<num;
}
int main(){
    int n;
    cin>>n;
    solve(n);
}
