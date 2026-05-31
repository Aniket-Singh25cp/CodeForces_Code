#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    int total = 0;
    while (n--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(x+y+z>=2) total++;
    }
    cout<<total<<"\n";
    return 0;
}