#include <bits/stdc++.h>
using namespace std;
const int N=300000;
bool prime[300001];
void sieve() {
    fill(prime, prime + N + 1, true);
    prime[0]=prime[1]=false;
    for(int i=2;i*i<=N;i++){
        if(prime[i]){
            for(int j=i*i;j<=N;j+=i){
                prime[j]=false;
            }
        }
    }
}
int main() {
    sieve();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            int b=a;
            while(!prime[b]){
                b++;
            }
            cout<<b<<" ";
        }
        cout<<endl;
    }
    return 0;
}