#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    vector<int> v(n);
    for(auto &it:v) cin>>it;
    int sum = 0;
    for(auto &it:v) sum += it;
    sort(v.rbegin(),v.rend());
    int mine = 0,count=0;
    for(int i=0;i<n;++i){
        if(mine > sum) break;
        mine += v[i];
        sum -= v[i];
        count++;
    }

    cout<<count;
    return 0;
}