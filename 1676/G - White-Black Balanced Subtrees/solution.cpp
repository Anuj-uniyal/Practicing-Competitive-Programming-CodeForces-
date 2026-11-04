#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>a[5000];
string s;
int ans=0;
int dfs(int root){
    int d=0;
    if(s[root-1]=='B')d++;
    else d--;
    for(int p:a[root]){
        d+=dfs(p);
    }
    if(d==0)ans++;
    return d;
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;++i){
            a[i].clear();
        }
        for(int i=2;i<=n;++i){
            int k;
            cin>>k;
            a[k].push_back(i);
        }
        cin>>s;
        ans=0;
        dfs(1);
        cout<<ans<<endl;
    }
}