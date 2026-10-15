#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        long long n;
    cin>>n;
    string s; 
    cin>>s;
    long long c=0;
    long long x=-1;
    long long ans=n;
    for(long long i=0;i<n;++i){
        c++;
        if(s[i]=='1'){
            ans=max(ans,(i+1)*2);
            c++;
        }
    }
    ans=max(ans,c);
    reverse(s.begin(),s.end());
    c=0;
    for(long long i=0;i<n;++i){
        c++;
        if(s[i]=='1'){
            ans=max(ans,(i+1)*2);
            c++;
        }
    }
    ans=max(ans,c);
  cout<<ans<<endl;
    }
}