#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(a%b==0){
            cout<<0<<"\n";
        }else{
            cout<<((a/b)+1)*b - a<<"\n";
        }
    }
    return 0;
}