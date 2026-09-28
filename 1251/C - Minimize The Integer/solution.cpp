#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<ll>even;
        vector<ll>odd;
        for(int i=0;i<s.size();++i){
            if((s[i]-'0')%2==0){
                even.push_back(s[i]-'0');
            }
            else{
                odd.push_back(s[i]-'0');
            }
        }
        ll p=0;
        ll q=0;
        while(p<even.size() && q<odd.size()){
            if(even[p]<odd[q]){
                cout<<even[p];
                p++;
            }
            else{
                cout<<odd[q];
                q++;
            }
        }
        while(p<even.size()){
            cout<<even[p];
            p++;
        }
        while(q<odd.size()){
            cout<<odd[q];
            q++;
        }
        cout<<endl;
    }
    
 
}