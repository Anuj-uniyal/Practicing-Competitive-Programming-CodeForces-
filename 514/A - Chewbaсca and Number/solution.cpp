#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    cin>>x;
    for(int i=0;i<x.size();++i){
        if(i == 0 && x[i] == '9'){
            continue;
        }
        if(9-(x[i]-'0')<x[i]-'0'){
            x[i]='0'+ 9-(x[i]-'0');
        }
    }
    cout<<x<<endl;
}