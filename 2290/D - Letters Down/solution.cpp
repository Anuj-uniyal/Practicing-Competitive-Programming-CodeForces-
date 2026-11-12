#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool need[26]={false};
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-1-i]){
                char small=min(s[i],s[n-1-i]);
                char big=max(s[i],s[n-1-i]);
                for(char ch=small+1;ch<=big;ch++){
                    need[ch-'a']=true;
                }
            }
        }
        int ans=0;
        for(int i=0;i<26;i++){
            if(need[i])
                ans++;
        }
 
        cout<<ans<<endl;
    }
}