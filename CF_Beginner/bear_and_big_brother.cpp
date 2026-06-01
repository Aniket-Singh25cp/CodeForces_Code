#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    int count = 0;
    while(true){
        count++;
        a *= 3;
        b *= 2;
        if(a>b) break;
    }
    cout<<count<<"\n";
    return 0;
}