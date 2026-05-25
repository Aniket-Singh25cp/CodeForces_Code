#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    cout<< (n + 4)/5; //using integer ceiling division to get answer in O(1)
    return 0;
}