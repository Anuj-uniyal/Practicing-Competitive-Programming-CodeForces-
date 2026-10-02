#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int d;
        cin>>d;
        int a = d+1;
        while(true){
            bool p=false;
            for(int i=2;i*i<=a;i++){
                if(a%i==0){
                    p=true;
                    break;
                }
            }
            if(p){
                a++;
            }
            else{
                break;
            }
        }
        int b = a+d;
        while(true){
            int p=false;
            for(int i=2;i*i<=b;i++){
                if(b%i==0){
                    p=true;
                    break;
                }
            }
            if(p){
                p=false;
                b++;
            }
            else{
                break;
            }
        }
        cout<<a*b<<endl;
    }
}