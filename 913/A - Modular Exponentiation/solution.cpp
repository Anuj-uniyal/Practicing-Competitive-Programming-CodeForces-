#include<bits/stdc++.h>
using namespace std;
long long powr(int p,long long n){
    if(n==0){
        return 1;
    }
    long long x=powr(2,n/2);
    if(n%2==1){
        return ((((x)*(x)))*2);
    }
    else{
        return (((x)*(x)));
    }
}
int main(){
    long long n,m;
    cin>>n>>m;
    if(n>30)cout<<m;
    else
    cout<<m%powr(2,n);
}