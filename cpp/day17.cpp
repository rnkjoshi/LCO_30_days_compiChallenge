#include<bits/stdc++.h>

using namespace std;

int main(){
    map<string,bool> names;
    string s;int length;
    cin>>s>>length;
    bool flag=false;
    int i=0;
    stringstream ssin(s);
    string strings[length]
    while(ssin.good && i<length){
        cin>>strings[i];
        ++i;
    }
    for(i=0;i<length;i++){
        if(names.find(strings[i])==names.end()){
            names.insert(pair<string,bool>(strings[i],false));
        }else{
            names[arr[i]] = true;
        }
    }
    map<string,bool>::iterator it;
    for(it = names.begin();it!=names.end();++it){
        if(it->second){
            cout<<it->first<<" ";
        }
    }
}
