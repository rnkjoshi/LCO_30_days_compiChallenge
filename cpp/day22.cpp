#include<bits/stdc++.h>
using namespace std;

int main(){
    int year;
    cin>>year;
    if((year%400)%4 == 0)
        cout<<year<<" is a Leap year\n";
    else
        cout<<year<<" is not a Leap year\n";
}
