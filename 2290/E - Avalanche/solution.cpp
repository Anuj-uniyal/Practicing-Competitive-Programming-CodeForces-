#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        int n,k;
        cin>>n>>k;
        int parity=0;
        for (int i=0;i<n;i++){
            long long x;
            cin>>x;
            if(i%(k+1)==0){
                parity^=(x%2);
            }
        }
        cout<<(parity?"Alice":"Bob")<<endl;
    }
}