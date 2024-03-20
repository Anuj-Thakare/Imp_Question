#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the size of an array: ";
    cin>>n;
    cout<<endl;
    int a[n];
    cout<<"Enter elements in array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            sum+=a[i];
        }
    }
    cout<<"Sum of even number is: "<<sum<<endl;5
    vector<int>v;
    while(sum){
        v.push_back(sum%2);
        sum/=2;
    }
    reverse(v.begin(), v.end());
    for(auto it:v){
        cout<<it;
    }
    return 0;
}