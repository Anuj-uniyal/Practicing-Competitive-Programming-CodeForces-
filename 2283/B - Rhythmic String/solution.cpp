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
        int maxi=INT_MIN;
        for(int i=0;i<n;++i){
            int c=0;
            for(int j=i;j<n;++j){
                int x=v[j]/v[i];
                if(x*v[i]==v[j])c++;
            }
            maxi=max(maxi,c);
        }
        cout<<n-maxi<<endl;
    }
}