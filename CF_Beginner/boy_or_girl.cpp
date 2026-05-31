#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    set<char> st(s.begin(),s.end());
    if(st.size() % 2 == 0){
        cout<<"CHAT WITH HER!"<<"\n";
    }else{
        cout<<"IGNORE HIM!"<<"\n";
    }

    return 0;
}