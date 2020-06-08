#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    int romanInt[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string romanStr[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    cin>>n>>m;
    int result = n+m;
    int i=12;
    while(result>0){
        int pos = result/romanInt[i];
        result = result%romanInt[i];
        while(pos--){
            cout<<romanStr[i];
        }
        i--;
    }


}
