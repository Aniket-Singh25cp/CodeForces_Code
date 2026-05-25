#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    set<int> st;
    int n; cin>>n;
    for(int i=0;i<n;++i){
        int val; cin>>val;
        st.insert(val);
    }
    if(st.size()>=2){
        auto it = st.begin();
        ++it;
        cout<<*it<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
    return 0;
}