#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007LL;
long long power(long long b,long long e){
    b%=MOD;
    if(b<0)b+=MOD;
    long long r=1;
    while(e>0){
        if(e&1)r=r*b%MOD;
        b=b*b%MOD;
        e>>=1;
    }
    return r;
}
long long maxi(int n, vector<long long>& a){
    vector<long long>c(a);
    sort(c.begin(),c.end(),greater<long long>());
    long long ans=1;
    for(int i=0;i<n;i++){
        bool u=(i==0||c[i-1]!=c[i])&&(i==n-1||c[i+1]!=c[i]);
        if(!u)break;
        int s=i+1;
        ans=(ans+power(c[i]-1,s))%MOD;
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>a(n);
        for(auto& x:a)cin >> x;
        cout<<maxi(n,a)<<endl;
    }
    return 0;
}