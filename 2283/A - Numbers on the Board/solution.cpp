#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        if(l==0 && r==0)cout<<0<<endl;
        else if(abs(l)==abs(r))cout<<0<<endl;
        else if(l<0 && r<0)cout<<abs(l-r)<<endl;
        else if(l>0 && r>0)cout<<r-l<<endl;
        else if(l==0)cout<<r-l-1<<endl;
        else{
            cout<<(r-l+1)-(min(abs(l),abs(r))*2+2)<<endl;
        }
    }
}