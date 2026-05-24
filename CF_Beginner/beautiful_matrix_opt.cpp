#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int val;
    for(int i=0;i<5;++i){
        for(int j=0;j<5;++j){
            cin>>val;

            if(val==1){
                cout<<abs(i-2) + abs(j-2);
                return 0;
            }
        }
    }
}