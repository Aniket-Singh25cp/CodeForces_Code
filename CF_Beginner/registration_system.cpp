#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    map<string,int> mp;
    int t;
    cin>>t;
    while(t--){
        string name;
        cin>>name;
        mp[name]++;
        if(mp[name]==1){
            cout<<"OK"<<"\n";
        }else{
            cout<<name<<mp[name] - 1<<"\n";
        }
    }

    return 0;
}