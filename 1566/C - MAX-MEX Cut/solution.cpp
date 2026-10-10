#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        int i=0;
        int j=0;
        int ans=0;
        while(i<n && j<n){
            if(s1[i]!=s2[j]){
                ans+=2;
                i++;j++;
            }
            else{
                if(s1[i]=='0'){
                    if((i<n-1 && j<n-1) && (s1[i+1]=='1' && s2[j+1]=='1')){
                        ans+=2;
                        i+=2;j+=2;
                    }
                    else{
                        ans+=1;
                        i++;j++;
                        
                    }
                }
                else {
                    if((i<n-1 && j<n-1) && (s1[i+1]=='0' && s2[j+1]=='0')){
                        ans+=2;
                        i+=2;j+=2;
                    }
                    else{
                        ans+=0;
                        i++;j++;
                    }
                }
            }
            
        }
        cout<<ans<<endl;
    }
}