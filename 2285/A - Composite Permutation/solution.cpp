#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1||n==2||n==3){
            cout<<-1;
          }
        else if(n%2==0){
            for(int i=n;i>=1;--i){
                cout<<i<<" ";
            }
        }
        
        else{
            int x=n;
            vector<int>v(n);
            for(int i=0;i<n;++i){
                v[i]=x;
                x--;
            }
            swap(v[0],v[1]);
            swap(v[n-1],v[n-2]);
            for(int i=0;i<n;++i)cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}