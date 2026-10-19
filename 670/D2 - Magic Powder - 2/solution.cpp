#include<bits/stdc++.h>
using namespace std;
bool check(long long mid,long long k,long long n,vector<long long>&a,vector<long long>&b){
    for(long long i=0;i<n;++i){
        long long req=mid*a[i];
        req-=b[i];
        if(req>0){
            if(k>=req){
                k-=req;
            }
            else{
                return false;
            }
        }
    }
    return true;
}
int main(){
    long long n,k;
    cin>>n>>k;
    vector<long long>a(n);
    vector<long long>b(n);
    for(long long i=0;i<n;++i){
        cin>>a[i];
    }
    for(long long i=0;i<n;++i){
        cin>>b[i];
    }
    long long l=0;
    long long h=2000000000;
    long long ans=0;
    while(l<=h){
        long long mid=l+(h-l)/2;
        if(check(mid,k,n,a,b)){
            ans=mid;
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    cout<<ans;
}