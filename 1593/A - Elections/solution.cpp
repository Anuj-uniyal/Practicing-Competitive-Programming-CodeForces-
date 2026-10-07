#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long a,b,c;
        cin>>a>>b>>c;
        if(a==b && b==c){
            cout<<1<<" "<<1<<" "<<1<<endl;
        }
        else{
            long p=max({a,b,c});
            if((p==a && p==b) || (p==a && p==c) || (p==b && p==c)) cout<<p-a+1<<" "<<p-b+1<<" "<<p-c+1<<endl;
            else if(a==p)
            cout<<p-a<<" "<<p-b+1<<" "<<p-c+1<<endl;
            else if(b==p)
            cout<<p-a+1<<" "<<p-b<<" "<<p-c+1<<endl;
            else  cout<<p-a+1<<" "<<p-b+1<<" "<<p-c<<endl;
        }
    }
}