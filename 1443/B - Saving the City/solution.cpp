#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        long long c=0;
        long long zero=0;
        bool flag=false;
        for(int i=0;i<s.size();++i){
            if(s[i]=='0'){
                    zero++;
                }
            else
            {
                if(s[i]=='1' && flag==false){
                c+=a;
                flag=true;
            }
            else{
                c+=min(zero*b,a);
            }
            zero=0;
            } 
        }
        cout<<c<<endl;
  }
}
 