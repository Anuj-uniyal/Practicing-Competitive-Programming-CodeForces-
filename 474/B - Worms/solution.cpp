#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    for(int i=1;i<n;++i){
       v[i]+=v[i-1];
    }
    int m;
    cin>>m;
    while(m--){
        int x;
        cin>>x;
        int p=lower_bound(v.begin(),v.end(),x)-v.begin();
        cout<<p+1<<endl;
    }
}