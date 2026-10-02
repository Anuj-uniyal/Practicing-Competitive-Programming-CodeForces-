#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long n, a, b;
        cin >>n>>a>>b;
 
        bool mila=false;
 
        if(a==1){
            if((n-1)%b==0) {
                mila = true;
            }
        }
        else {
            long long power=1;
 
            while (power<=n) {
                if ((n-power)%b==0) {
                    mila = true;
                    break;
                }
 
                power*=a;
            }
        }
 
        if (mila) {
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }
 
    return 0;
}