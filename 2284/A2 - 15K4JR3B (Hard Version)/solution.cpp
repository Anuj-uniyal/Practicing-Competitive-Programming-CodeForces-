#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>v(n);
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v[i]=(1LL<<a);
        }
        sort(v.rbegin(),v.rend());
        long long x=0,y=0;
        for(int i=0;i<n;i++){
            if(x<=y)
              x+=v[i];
            else
                y+=v[i];
        }
        cout<<x*y<<endl;
    }
}