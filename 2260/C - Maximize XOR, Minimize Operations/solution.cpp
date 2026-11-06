#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        long long a=0;
        long long s=x+y;
        for(long long i=63;i>=0;--i){
            if((s)&(1LL<<i)){
                if((a+(1LL<<i))<=x){
                    a+=1LL<<i;
                }
            }
        }
        
        cout<<s<<" "<<x-a<<endl;
    }
}