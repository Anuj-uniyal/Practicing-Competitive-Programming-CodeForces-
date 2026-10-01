#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        int x=n.length();
        int p=x;
        int a=0;
        for(int i=0;i<x;++i){
            if(n[i]=='0'){
                continue;
            }
            a++;
        }
        cout<<a<<endl;
        for(int i=0;i<x;++i){
            if(n[i]=='0'){
                p--;
                continue;
            }
            else{
                cout<<(n[i]-'0')*pow(10,p-1)<<" ";
                p--;
            }
        }
        cout<<endl;
    }
}