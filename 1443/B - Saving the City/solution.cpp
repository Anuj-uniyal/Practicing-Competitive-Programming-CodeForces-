#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int a, b;
        cin >> a >> b;
 
        string s;
        cin >> s;
 
        int ans = 0;
        int zero = 0;
        bool found = false;
 
        for (int i = 0; i < s.size(); i++) {
 
            if (s[i] == '0') {
                zero++;
            }
            else {
                if (!found) {
                    ans += a;
                    found = true;
                }
                else {
                    ans += min(a, zero * b);
                }
 
                zero = 0;
            }
        }
 
        cout << ans << endl;
    }
 
    return 0;
}
 