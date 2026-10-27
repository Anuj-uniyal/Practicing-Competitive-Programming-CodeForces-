#include <bits/stdc++.h>
using namespace std;
long long MOD = 998244353;
const int MAXN = 200000;
long long fact[MAXN+1],inv[MAXN+1];
int main() {
    fact[0]=1;
    for(int i=1;i<=MAXN;i++){
        fact[i]=fact[i-1]*i%MOD;
    }
    inv[1]=1;
    for(int i=2;i<=MAXN;i++){
        inv[i]=MOD-(MOD/i)*inv[MOD%i]%MOD;
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>a(n);
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        vector<long long>suffix(n+1,0);
        for(int i=n-1;i>=0;i--){
            suffix[i]=(suffix[i+1]+a[i]) %MOD;
        }
        long long ans=0;
        for(int i=0;i<n-1;i++){
            long long count=n-i-1;
 
            long long sumDiff=(suffix[i+1]-count*(a[i]%MOD)%MOD+MOD)%MOD;
            long long ways=fact[n-1]*inv[count]%MOD;
 
            ans=(ans+ways*sumDiff)%MOD;
        }
        cout<<ans<<endl;
    }
    return 0;
}