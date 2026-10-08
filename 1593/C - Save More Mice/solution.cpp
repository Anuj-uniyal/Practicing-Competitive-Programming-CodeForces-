#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
    cin>>n>>k;
    vector<int>v(k);
    for(int i=0;i<k;++i){
        cin>>v[i];
    }
     long long x=(n/2)+1;
     sort(v.rbegin(),v.rend());
     vector<int>p(k);
     for(int i=0;i<k;++i){
        p[i]=n-v[i];
     }
     long long  sum=0;
     int c=0;
    for(int i=0;i<k;i++){
        sum+=p[i];
        if(sum>= n)
            break;
        c++;
}
     cout<<c<<endl;
    }
    
}