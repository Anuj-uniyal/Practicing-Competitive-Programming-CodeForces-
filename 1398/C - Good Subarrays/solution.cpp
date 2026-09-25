#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string st;
        cin>>st;
        long long c=0;
        vector<int>v(n);
        for(int i=0;i<n;++i){
            v[i]=(st[i]-'0')-1;
        }
        vector<int>pf(n);
        pf[0]=v[0];
        for(int i=1;i<n;++i){
            pf[i]=v[i]+pf[i-1];
        }
        map<int,int> freq;
        freq[0] = 1;
        for(int i=0;i<n;++i){
        c += freq[pf[i]];
        freq[pf[i]]++;
      }
        cout<<c<<endl;
    }
 
}