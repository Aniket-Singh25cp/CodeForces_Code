#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    int x = 0;
    while(t--){
        string s;
        cin>>s;
        if(s=="X++" || s=="++X") x+=1;
        else if(s=="--X" || s=="X--") x -= 1;
    }
    cout<<x<<"\n";
    return 0;
}