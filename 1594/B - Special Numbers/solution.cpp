#include<bits/stdc++.h>
using namespace std;
long long M=1e9+7;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long p=1;
        long long ans=0;
        for(long long  i=0;i<64;++i){
            if((k&(1LL<<i))!=0){
                ans = (ans + p) % M;
            }
            p=(p*n)%M;
        }
        cout<<ans<<endl;
    }
}