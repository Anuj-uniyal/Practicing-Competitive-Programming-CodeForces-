#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        vector<int>freq(101,0);
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }
 
        int maxi = 0;
        for (int i= 1; i<= 100; i++) {
            maxi = max(maxi, freq[i]);
        }
 
        vector<int> ans;
      
 
        for (int i= 1; i<= maxi; i++) {
            for (int j = 100; j >= 1; j--) {
                if (freq[j] >= i) {
                    ans.push_back(j);
                }
            }
        }
 
        for (int i = 0; i < (int)ans.size(); i++) {
            cout << ans[i] << (i + 1 == (int)ans.size() ? "
" : " ");
        }
    }
 
    return 0;
}