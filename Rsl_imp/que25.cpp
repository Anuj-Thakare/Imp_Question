#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]==0) cnt++;
    }
    for(int i=0;i<cnt;i++){
        a[i]=0;
    }
    for(int i=cnt-1;i<n;i++){
        a[i]=1;
    }
    int x = 0;
    for(int i=0;i<n;i++){
        // if(x<cnt)   cout<<"0"<<" ";
        // else    cout<<"1"<<" ";
        cout<<a[i]<<" ";
        x++;
    }
}