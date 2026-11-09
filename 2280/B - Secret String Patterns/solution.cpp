#include <bits/stdc++.h>
using namespace std;
int query(int l,int r){
    cout<<"? "<<l<<" "<<r<<endl;
    int ans;
    cin>>ans;
    if(ans==-1){
        exit(0);
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt=query(1,n);
        if (cnt==0||cnt==n) {
            cout<<"! NO"<<endl;
            continue;
        }
        int x=query(1,cnt);
        if(x==cnt){
            cout<<"! NO"<<endl;
        }
        else{
            cout<<"! YES"<<endl;
        }
    }
    return 0;
}