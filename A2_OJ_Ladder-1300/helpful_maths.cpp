#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin>>s;
    vector<char> a;
    for(auto it:s){
        if(it=='+') continue;
        else a.emplace_back(it);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();++i){
        cout<<a[i];
        if(i!=a.size()-1) cout<<'+';
    }
    return 0;
}