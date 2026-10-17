#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        int n;
        string s;
        cin>>n>>s;
        int k=count(s.begin(),s.end(),'1');
        if(k==1){
        cout<<0<<endl;
        } else if(k==2) {
            cout<<1<<endl;
        } else{
            cout<<(int)s.rfind('1')-(int)s.find('1')<<endl;
        }
    }
    return 0;
}