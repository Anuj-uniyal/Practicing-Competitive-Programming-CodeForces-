#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long  c1=0;long long c2=0;
        while(a%2==0){
            c1++;
            a=a/2;
        }
        while(b%2==0){
            c2++;
            b=b/2;
        }
        if(a!=b)cout<<-1<<endl;
        else{
            long long p=abs(c2-c1);
            cout<<(p+2)/3<<endl;
        }
    }
}