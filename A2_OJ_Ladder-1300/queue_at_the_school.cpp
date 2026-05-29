#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    int t; cin>>t;
    string s; cin>>s;
    while (t--)
    {
        for(int i=0;i<n-1;){
            if(s[i]<s[i+1]){
                char c = s[i];
                s[i] = s[i+1];
                s[i+1] = c;
                i += 2;
            }else{
                ++i;
            }
        }
    }
    cout<<s<<"\n";
    return 0;
}