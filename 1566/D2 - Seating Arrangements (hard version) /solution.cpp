#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,m;
    cin>>n>>m;
    vector<pair<long long,long>>v(n*m);
    for(int i=0;i<n*m;++i){
        cin>>v[i].first;
        v[i].second=i;
    }
    sort(v.begin(),v.end());
    long long inc=0;
    for(int i=0;i<n*m;i+=m){
        int end=i+m;
        sort(v.begin()+i, v.begin()+end, [](pair<int,int> a, pair<int,int> b) {
         return a.second < b.second;
        });
        for(int j=end-1;j>=i;--j){
            for(int k=i;k<j;++k){
                if(v[k].first<v[j].first){
                    inc++;
                }
            }
        }
        
    }
    cout<<inc<<endl;
    }
    
 
}