#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,l,r,x;
    cin>>n>>l>>r>>x;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int ans = 0;
    for(int m = 0; m < (1 << n); ++m) {
        vector<int> s;
        for(int j = 0; j < n; ++j) {
 
            if((m & (1 << j)) != 0) {
                s.push_back(a[j]);
            }
        }
        if(s.size() < 2) {
            continue;
        }
        long long sum = 0;
        int mn = s[0];
        int mx = s[0];
        for(int j = 0; j < s.size(); ++j) {
            sum += s[j];
 
            mn = min(mn, s[j]);
            mx = max(mx, s[j]);
        }
        if(sum < l || sum > r) {
            continue;
        }
        if(mx - mn < x) {
            continue;
        }
 
        ans++;
    }
 
    cout << ans << endl;
 
    return 0;
}