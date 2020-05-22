#include<bits/stdc++.h>

using namespace std;
long long multiply(long long x, long long y){
    if(y==0)
        return 0;
    return (x+multiply(x,y-1));
}
int main(){
    cout<<multiply(12000000,365);
}
