#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    int c=0;
    int p=0;
    for(int i=0;i<3;++i){
        if(v[i]%2==0){
            c++;
        }
        else{
            p++;
        }
    }
    if(c>p){
        for(int i=0;i<n;++i){
            if(v[i]%2){
                cout<<i+1;
                break;
            }
        }
    }
    else{
        for(int i=0;i<n;++i){
            if(v[i]%2==0){
                cout<<i+1;
                break;
            }
        }
    }
 
}