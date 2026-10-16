#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    int z=0;int t=0;
    for(int i=0;i<n;++i){
        if(v[i]==1){
            z++;
        }
        else{
            t++;
        }
    }
    vector<int>ans;
    if(t>0){
        ans.push_back(2);
        t--;
    }
    if(z>0){
          ans.push_back(1);
          z--;
    }
  
    while(t--){
        ans.push_back(2);
    }
    while(z--){
        ans.push_back(1);
    }
    for(int i=0;i<n;++i){
        cout<<ans[i]<<" ";
    }
 
}