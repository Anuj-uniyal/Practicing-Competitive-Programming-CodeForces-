#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i=0;int j=n-1;
        int x=0;
        while(i<j){
            if(s[i]==s[j] || (s[i]+0)+1==(s[j]+0)-1 || (s[i]+0)-1==(s[j]+0)+1){
                i++;j--;
            }
            else{
                cout<<"NO"<<endl;
                x++;
                break;
            }
        }
        if(x==0)cout<<"YES"<<endl;
 
    }
}