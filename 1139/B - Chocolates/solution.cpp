#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    long long ans=v[n-1];
    long long maxi=v[n-1]-1;
    for(int i=n-2;i>=0;--i){
       if(v[i]<=maxi){
        ans+=v[i];
        maxi=v[i]-1;
       }
       else{
        ans+=maxi;
        maxi=maxi-1;
        if(maxi<0){
            break;
        }
       }
    }
    cout<<ans;
}