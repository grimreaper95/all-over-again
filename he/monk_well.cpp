#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    int a[n],b[n],c[n];

    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    for(int i=0;i<n;i++)cout<<a[i]+b[i]<<" ";
    //cout<<endl;
    return 0;
}
