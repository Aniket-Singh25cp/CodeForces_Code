#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    string s; cin>>s;
    for(char &c:s){
        if(c>='A' && c<='Z') c += 32;
    }
    set<char> st(s.begin(),s.end());
    if(st.size()==26){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
    return 0;
}