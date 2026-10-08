#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int med=0;
    if(n%2)
     med=n/2;
     else
     med=(n/2)-1;
    int c=0;
    for(int i=med;i<n;++i){
        if(v[i]==v[med])c++;
    }
    cout<<c<<endl;
    }
    
}