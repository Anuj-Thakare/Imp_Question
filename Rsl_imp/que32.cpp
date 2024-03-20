#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    int leftsum=0;
    int mid;
    int rigthsum=sum-a[0];
    for(int i=0;i<n;i++){
        leftsum+=a[i];
        mid=a[i+1];
        rigthsum-=mid;
        if(leftsum==rigthsum){
            cout<<"Equilibrium found "<<mid;
            return 0;
        }
    }
     cout<<"Equilibrium not found";
    return 0;
}
