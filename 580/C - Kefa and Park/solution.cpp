#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int>a(100010);
vector<int>v[100010];
int ans=0;
 
 
void dfs(int root,int parent,int c){
    if(a[root]==1)c++;
    else c=0;
    if(c>m)return;
    bool leaf=true;
    for(int x:v[root]){
        if(x!=parent){
            leaf=false;
            dfs(x,root,c);
        }
    }
    if(leaf)ans++;
}
 
int main(){
   cin>>n>>m;
   for(int i=1;i<=n;++i){
    cin>>a[i];
   }
   for(int i=0;i<n-1;++i){
    int p,q;
    cin>>p>>q;
    v[p].push_back(q);
    v[q].push_back(p);
   }
   dfs(1,0,0);
   cout<<ans;
}