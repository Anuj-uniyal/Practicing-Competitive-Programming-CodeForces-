#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;++i){
            string s="";
            s+=string(i,'(');
            s+=string(i,')');
            for(int j=0;j<n-i;++j){
                s+="()";
            }
            cout<<s<<endl;
        }
    }
}