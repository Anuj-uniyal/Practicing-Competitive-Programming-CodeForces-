#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1)cout<<0<<endl;
        else if((n&(n-1))==0)cout<<n-1<<endl;
        else{
            for(int i=0;;++i){
            if((1<<i)>=n){
                cout<<(1<<(i-1))-1<<endl;
                break;
            }
        }
        }
        
    }
}