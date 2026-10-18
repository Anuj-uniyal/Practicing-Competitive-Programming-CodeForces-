#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k,q;
    cin>>k>>q;
    vector<int>v(k);
    for(int i=0;i<k;++i){
        cin>>v[i];
    }
    while(q--){
        int x;
        cin>>x;
        cout<<min(v[0]-1,x)<<" ";
    }
    cout<<endl;
    }
    
}