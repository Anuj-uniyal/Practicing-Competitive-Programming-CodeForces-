#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    long long sum=0;
    vector<long long>v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
        sum+=v[i];
    }
    cout<<(sum%n)*(n-(sum%n))<<endl;
    }
    
}