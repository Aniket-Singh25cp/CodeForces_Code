#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    for(char &c:s1){
        if(c>='A' && c<='Z') c += 32;
    }
    for(char &c:s2){
        if(c>='A' && c<='Z') c += 32;
    }
    if(s1==s2){
        cout<<0<<"\n";
    }else if(s1<s2){
        cout<<-1<<"\n";
    }else{
        cout<<1<<"\n";
    }
    return 0;
}