#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    unordered_map<string,int>um;
    for(int i=0;i<n;++i){
        um[v[i]]++;
    }
    int mini=0;
    string k="";
    for(pair<string,int>p:um){
        if(p.second>mini){
            mini=p.second;
            k=p.first;
        }
    }
    cout<<k;
}