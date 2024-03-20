#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int a[n];
    a[0]=0;
    a[1]=1;
    int i=2;
    while(a[i-1]<n){
        a[i] = a[i-1]+a[i-2];
        if(a[i]==n){
            cout<<a[i]<<endl;
            return 0;
        }
        i++;
    }
    i=0;
    int sum=0;
    while(a[i]<n){
        if(a[i]%2==0)
        sum+=a[i];
        i++;
    }
    cout<<"Sum is: "<<sum;
    return 0;
}