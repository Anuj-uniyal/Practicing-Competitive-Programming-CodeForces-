#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
        int n=s.size();
        int idk=0;
        bool a=false;
        for(int i=0;i<n;++i){
            if(s[i]=='0'){
                if(!a){
                    idk++;
                    a=true;
                }
            }
            else{
                    a=false;
                }
        }
        if(idk==0){
            cout<<0<<endl;
        }
        else if(idk==1){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
 
    return 0;
}