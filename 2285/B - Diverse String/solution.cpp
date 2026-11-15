#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int x=n;
        string s;
        cin>>s;
        int ones=0;
        for (int i=0;i<n;i++){
            if(s[i]=='1'){
                ones++;
            }
        }
        int zeros=n-ones;
        int a=max(0,min(ones,zeros)-k);
        int b=n-a;
        long long ans=1LL+(1LL*a*(a+1))/2+(1LL*b*(b+1))/2;
        cout<<ans<<endl;
    }
    return 0;
}