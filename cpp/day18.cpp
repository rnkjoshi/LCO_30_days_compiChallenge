#include<bits/stdc++.h>

using namespace std;

int main(){
    int fishes[] = {12,13,8,10,17};
    sort(fishes,fishes+(sizeof(fishes)/sizeof(fishes[0])));
    cout<<fishes[4];
}
