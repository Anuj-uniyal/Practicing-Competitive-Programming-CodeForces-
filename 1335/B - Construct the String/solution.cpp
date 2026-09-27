#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        string ans="";
        int x=0;
        int q=b;
        int p=0;
        while(q--){
            ans+=char(97+(x++));
            }
        while(ans.size()!=n){
                ans+=ans[p];
                p++;
            }
            cout<<ans<<endl;
        }
        
    }