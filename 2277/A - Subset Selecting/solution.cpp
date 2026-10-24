#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
   cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>cnt(n+2,0);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            cnt[x]++;
        }
        int pref=0,ans=0;
        for(int v=0;v<=n;v++){
            pref+=cnt[v];
            if(cnt[v]>=1 && pref>=k*(v+1)){
                ans=v+1;
            }else{
            break;
            }
        }
       cout<<ans<<endl;
    }
    return 0;
}