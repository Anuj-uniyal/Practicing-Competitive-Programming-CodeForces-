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
    int l=0;int r=n-1;
    for(int i=0;i<n;++i){
        if(i%2==0){
            cout<<v[l]<<" ";
            l++;
        }
        else{
            cout<<v[r]<<" ";
            r--;
        }
    }
    cout<<endl;
    }
}