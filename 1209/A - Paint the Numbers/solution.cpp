#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 0;
    for (int x= 1; x<= 100; x++) {
        bool usmehai = false;
        for (int i= 0; i< n; i++) {
            if (a[i] == x) {
                usmehai = true;
                break;
            }
        }
        if (!usmehai)
            continue;
        ans++;
        for (int i = 0; i < n; i++) {
            if (a[i] % x == 0) {
                a[i] = 0;
            }
        }
    }
 
    cout << ans << endl;
 
    return 0;
}