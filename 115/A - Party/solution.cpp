#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n+1);
    for(int i=1;i<=n;++i){
        cin>>v[i];
    }
    int ans=0;
    for(int i=1;i<=n;++i){
        int d=0;
        int a=i;
        while(a!=-1){
            d++;
            a=v[a];
        }
        ans=max(ans,d);
    }
    cout<<ans<<endl;
}