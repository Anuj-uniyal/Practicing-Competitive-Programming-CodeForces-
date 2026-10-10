#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>v(n*m);
        for(int i=0;i<n*m;++i){
            cin>>v[i];
        }
        int c=0;
        for(int i=n*m-1;i>=0;--i){
            for(int j=0;j<i;++j){
                if(v[j]<v[i]){
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
}