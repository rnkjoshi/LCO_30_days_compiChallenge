#include<bits/stdc++.h>

using namespace std;

int main(){
    int freeBytes,usedBytes,deleteBytes,addFileBytes;
    cin>>freeBytes>>usedBytes>>deleteBytes>>addFileBytes;
    cout<<(freeBytes+(usedBytes-deleteBytes))-addFileBytes;
    return 0;
}
