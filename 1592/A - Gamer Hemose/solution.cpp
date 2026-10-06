#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,h;
        cin>>n>>h;
        vector<long long>v(n);
        for(int i=0;i<n;++i){
            cin>>v[i];
        }
 
        sort(v.begin(),v.end());
        long long c=0;
        long long a=v[n-1];
        long long b=v[n-2];
        long long p=h/(a+b);
        c=p*2;
        h %= (a + b);
 
        if (h == 0) {
            cout << c << endl;
        }
        else if (h <= a) {
            cout << c + 1 << endl;
        }
        else {
            cout<<c+2<<endl;
        }
    }
}