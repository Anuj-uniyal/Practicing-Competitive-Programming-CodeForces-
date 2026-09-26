#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    priority_queue<int>pq;
    long long sum=0;
    int c=0;
    for(int i=0;i<n;++i){
        if(v[i]<0){
            pq.push(v[i]*-1);
        }
        sum+=v[i];
        c++;
        if(sum<0){
            sum+=pq.top();
            c--;
            pq.pop();
        }
    }
    cout<<c;
}