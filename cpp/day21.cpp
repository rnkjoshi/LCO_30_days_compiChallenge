#include<bits/stdc++.h>

using namespace std;

int main(){
    int hour,minute;
    cin>>hour>>minute;
    double minAngle = 6 * minute;
    double hourAngle = 30.0 * hour;
    double angle = abs(minAngle-hourAngle);
    if(angle == 0.0)
        cout<<"both are at same point";
    else
        cout<<"angle between minutes and hour is = "<<angle;
}
