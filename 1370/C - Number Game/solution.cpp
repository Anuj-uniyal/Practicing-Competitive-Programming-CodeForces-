#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
    cin>>n;
    if(n==1){
        cout<<"FastestFinger"<<endl;
    }
    else if(n==2){
        cout<<"Ashishgup"<<endl;
    }
    else if(n%2){
        cout<<"Ashishgup"<<endl;
    }
    else{
        if((n&(n-1))==0){
            cout<<"FastestFinger"<<endl;
        }
        else if((n/2)%2==0){
            cout<<"Ashishgup"<<endl;
        }
        else if((n/2)%2){
            int p=n/2;
            int q=0;
            for(int i=2;i*i<=p;++i){
                if(p%i==0){
                    q++;
                    break;
                }
            }
            if(q==0){
                cout<<"FastestFinger"<<endl;
            }
            else{
                cout<<"Ashishgup"<<endl;
            }
        }
    }
    }
    return 0;
}