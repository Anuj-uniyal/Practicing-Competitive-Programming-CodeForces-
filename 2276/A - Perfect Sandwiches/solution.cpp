#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
 
    while(t--){
        long long a, b;
        cin >> a >> b;
 
        if (a <= b) {
            cout << -1 << '
';
        } else {
            cout << min(b, a - b) << '
';
        }
    }
 
    return 0;
}