#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    int xSum = 0, ySum = 0, zSum = 0;
    while(n--){
        int x,y,z;
        cin>>x>>y>>z;
        xSum += x;
        ySum += y;
        zSum += z;
    }
    if(xSum==0 && ySum==0 && zSum==0){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
    return 0;
}