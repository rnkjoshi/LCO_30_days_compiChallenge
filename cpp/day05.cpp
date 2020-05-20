#include<bits/stdc++.h>
using namespace std; 
int main(){
int a[5]={66,59,57,45,53};
for(int i=0;i<a.size():i++){
   for(int j=i;j<a.size();j++){
       if(a[i]<a[j]){
          int temp = a[i];
          a[i]=a[j];
          a[j]=temp;
       }
   }
}
cout<<a[a.size()-1];
}
