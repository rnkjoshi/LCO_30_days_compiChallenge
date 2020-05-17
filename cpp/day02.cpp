/*
Print this pattern.
            **
            **
           ****
           ****
          ******
          ******
         ********
         ********
*/
#include<bits/stdc++.h>

using namespace std;

void patternPrint(int spaces,int asterics){
    for(int i=0;i<spaces;i++)
        printf(" ");
    for(int i=0;i<asterics;i++)
        printf("*");
    printf("\n");

}
int main(){
    int n;
    cin>>n;
    int counter=2;
    for(int i=0;i<n;i++){
        patternPrint(n-i,counter);
        patternPrint(n-i,counter);
        counter+=2;
    }

}
