#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
bool check(ll x,ll k,ll n){
    ll p=0;;
    ll z=1;
    while((x/z)!=0){
       p+=x/(z);
       z*=k;
    }
    if(p>=n){
        return true;
    }
    return false;
}
 
int main(){
    ll n,k;
    cin>>n>>k;
    ll ans=n;
    ll a=1;
    ll b=n;
 
    while(a<=b){
        ll mid=a+(b-a)/2;
        if(check(mid,k,n)){
            ans=mid;
            b=mid-1;
        }
        else{
            a=mid+1;
        }
    }
    cout<<ans;
}