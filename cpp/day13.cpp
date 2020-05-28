#include<bits/stdc++.h>
using namespace std;

int main(){
    int kara_glass,rani_glass;
    cout<<"glasses sold by kara and rani respectively : ";
    cin>>kara_glass>>rani_glass;
    int kara_earned,rani_earned;
    kara_earned = kara_glass * 5;
    rani_earned = rani_glass * 7;
    kara_earned>rani_earned ? cout<<"kara earned "<<kara_earned-rani_earned<<" more than Rani":
        cout<<"Rani earned "<<rani_earned-kara_earned<<" more than Kara";
}
