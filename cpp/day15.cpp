#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int counter=0;
    do{
        counter+=n%10;
        n = n/10;
    }while(n);
    cout<<counter;
}
