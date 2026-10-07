#include<bits/stdc++.h>
using namespace std;
 
long long M = 1e9+7;
 
long long binpow(long long a, long long b){
    long long ans = 1;
 
    while(b > 0){
        if(b & 1){
            ans = (ans * a) % M;
        }
 
        a = (a * a) % M;
        b = b >> 1;
    }
 
    return ans;
}
 
int main(){
 
    long long k;
    cin >> k;
 
    long long p = (1LL << k) - 2;
 
    cout << (6 * binpow(4, p)) % M;
 
}