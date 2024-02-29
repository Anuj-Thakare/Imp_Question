#include <iostream>
using namespace std;
int main(){
cout<<"Enter Two Prime NUmber ";
int n1,n2;
cin>>n1>>n2;

int x1,x2;
for(int i=n1+1;i<n2;i++){
    bool isprime = true;
    for(int j=2;j<i;j++){
        if(i%j==0){
            isprime = false;
            break;
        }
    }
    if(isprime){
        x1 = i;
        break;
    }
}
for(int i=n2-1;i>n1;i--){
    bool isprime = true;
    for(int j=2;j<i;j++){
        if(i%j==0){
            isprime = false;
            break;
        }
    }
    if(isprime){
        x2 = i;
        break;
    }
}

if(x1-n1 == n2-x2)  cout<<x1<<" "<<x2;
else if(x1-n1 > n2-x2)  cout<<x2;
else    cout<<x1;
return 0;
}