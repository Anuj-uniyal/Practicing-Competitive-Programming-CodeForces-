#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>freq;
        for(int i=0;i<n;i++) {
            int x;
            cin>>x;
            freq[x]++;
        }
        int ans=0;
        vector<int>l,r,extra;
        for(auto p:freq) {
            ans+=min(p.second,2);
            l.push_back(p.first);
            if(p.second>=2)
                r.push_back(p.first);
 
            for(int j=2;j<p.second;j++)
                extra.push_back(p.first);
        }
        reverse(r.begin(),r.end());
        cout<<ans<<endl;
        for(int x:l)cout<<x<<" ";
        for(int x:extra)cout<<x<<" ";
        for(int x:r)cout<<x<<" ";
 
        cout<<endl;
    }
}