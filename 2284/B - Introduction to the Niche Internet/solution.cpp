#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<long long>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        long long sum=0;
        for(int i=n-k;i<n;i++){
            sum+=v[i];
        }
        if(k<n && v[n-k-1]*k>=sum){
            cout<<"NO"<<endl;
            continue;
        }
        cout << "YES"<<endl;
        for(int i=n-k;i<n;i++){
            cout<<v[i]<<" ";
        }
        for(int i=n-k-1;i>=0;i--){
            cout<<v[i]<<" ";
        }
 
        cout<<endl;
    }
}