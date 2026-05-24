#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,m,a;
    cin>>n>>m>>a;

    long x = (n + (a-1))/a;
    long y = (m + (a-1))/a;
    cout<< (long long)x * y; 

    return 0;
}