#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        char c;
 
        cin >> n >> c;
 
        string s;
        cin >> s;
 
        bool d = true;
 
        for(int i = 0; i < n; ++i){
            if(s[i] != c){
                d = false;
                break;
            }
        }
 
        if(d){
            cout << 0 << endl;
            continue;
        }
 
        int x = -1;
 
        for(int i = n/2 + 1; i <= n; ++i){
            if(s[i-1] == c){
                x = i;
                break;
            }
        }
 
        if(x != -1){
            cout << 1 << endl;
            cout << x << endl;
        }
        else{
            cout << 2 << endl;
            cout << n-1 << " " << n << endl;
        }
    }
}