#include<bits/stdc++.h>
using namespace std;

int main(){
    float h,m,s,dist;
    cin>>dist>>h>>m>>s;
    s += h*60*60;
    s+= m*60;
    cout<<s<<endl;
    float mph = (s/dist)*(2.23694);
    cout<<mph;

}
