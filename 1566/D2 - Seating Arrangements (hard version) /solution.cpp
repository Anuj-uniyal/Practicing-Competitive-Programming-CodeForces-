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
for(int i=0;i<n*m;i+=m){
            int end=i+m;
            int j=i;
 
            while(j<end){
                int k=j;
 
                while(k<end && v[k].first==v[j].first){
                    k++;
                }
 
                reverse(v.begin()+j,v.begin()+k);
                j=k;
            }
        }
 
        vector<int>seat(n*m);
 
        for(int i=0;i<n*m;++i){
            seat[v[i].second]=i;
        }
 
        vector<bool>occ(n*m,false);
        long long inc=0;
 
        
 
    for(int i=0;i<n*m;++i){
            int pos=seat[i];
            int start=(pos/m)*m;
 
            for(int j=start;j<pos;++j){
                if(occ[j]){
                    inc++;
                }
            }
 
            occ[pos]=true;
        }
 
        cout<<inc<<endl;
    }
    
 
}