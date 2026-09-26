#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    int p=n;
    vector<vector<long long>>v;
    while(p--){
        int m,s;
        cin>>m>>s;
        v.push_back({m,s});
    }
    sort(v.begin(),v.end());
    long long a=0;
    long long b=0;
    long long ans=0;
    vector<long long>pf(n);
    pf[0]=v[0][1];
    for(int i=1;i<n;++i){
      pf[i]=pf[i-1]+v[i][1];
    }
    while(b<n){
        if(v[b][0]-v[a][0]<d){
            long long t=0;
            if(a==0){
                t=pf[b];
            }
            else{
                t=pf[b]-pf[a-1];
            }
            ans=max(ans,t);
            b++;
 
        }
        else{
            a++;
        }
    }
   cout<<ans;
}