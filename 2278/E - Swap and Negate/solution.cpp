#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>o,e;
        long long t=0;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            t+=x;
            if(i%2==0)
                o.push_back(x);
            else
                e.push_back(x);
        }
 
        sort(o.begin(),o.end());
        sort(e.begin(),e.end());
        long long sumO=0;
        long long sumE=0;
        long long mini=0;
        int k=min(o.size(),e.size());
        for(int i=0;i<k;i++){
            sumO+=o[i];
            sumE+=e[i];
            mini=min(mini,sumO+sumE);
        }
 
        cout<<t-2*mini<<endl;
    }
}