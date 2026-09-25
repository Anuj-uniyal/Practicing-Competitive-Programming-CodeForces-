#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char c;
        cin>>c;
        string s;
        cin>>s;
        int ct=0;
        int a=0;int b=n-1;
        int x=0;
        while(a<b){
            if(s[a]!=s[b]){
                if(s[a]==c || s[b]==c){
                    ct++;
                }
                else{
                    ct+=2;
                }
            }
            a++;b--;
        }
        cout<<ct<<endl;
    }
}