#include<bits/stdc++.h>
using namespace std;
int main(){
    long long k;
    cin>>k;
    string s="codeforces";
    vector<int>freq(10,1);
    long long prod=1;
    
    while(prod<k){
        for(int i=0;i<10;++i){
            if(prod>=k){
                break;
            }
        freq[i]++;
        prod=prod/(freq[i]-1)*freq[i];
        }
    }
    for(int i=0;i<10;++i){
        while(freq[i]--){
            cout<<s[i];
        }
    }
 
}