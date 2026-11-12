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
        int ans=0;
        for(char ch='z';ch>='b';ch--){
            bool found=false;
 
            for(int i=0;i<n/2;i++){
                if(s[i]!=s[n-1-i] &&
                   max(s[i],s[n-1-i])==ch) {
                    found=true;
                    break;
                }
            }
            if(found){
                for(int i=0;i<n;i++){
                    if(s[i]==ch)
                        s[i]--;
                }
                ans++;
                ch++;
            }
        }
        bool ok=true;
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-1-i])
                ok=false;
        }
        if(ok)
            cout<<ans<<endl;
        else
            cout<<-1<<endl;
    }
}