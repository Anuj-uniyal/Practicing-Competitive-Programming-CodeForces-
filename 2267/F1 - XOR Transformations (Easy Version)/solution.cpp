#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, q;
        cin >> n >> q;
 
        vector<int> a(n);
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> ans(31);
        for (int step = 0; step <= 30; step++) {
            int mn = a[0];
            int mx = a[0];
 
            for (int i = 1; i < n; i++) {
                mn = min(mn, a[i]);
                mx = max(mx, a[i]);
            }
            ans[step] = mx - mn;
            if (mx == 0) {
                break;
            }
            vector<int> v;
 
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    v.push_back(a[i] ^ a[j]);
                }
            }
            sort(v.begin(), v.end());
            vector<int> next;
 
            for (int i = 0; i < n; i++) {
                next.push_back(v[i]);
            }
            a = next;
        }
        while (q--) {
            int x;
            cin >> x;
 
            if (x >= 30) {
                cout << 0 <<endl;
            }
            else {
                cout << ans[x] <<endl;
            }
        }
    }
    return 0;
}