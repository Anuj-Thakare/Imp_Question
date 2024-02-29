#include <iostream>
using namespace std;

int fib(int n){
    if(n==1)    return 0;
    else if(n==2)   return 1;
    int x = fib(n-1)+fib(n-2); 
    return x;
}

int main(){
    int i=1;
    while(i<=10){

    cout<<fib(i)<<" ";
    i++;
    }

// a[0]=0,a[1]=1; 
// cout<<"0 1 ";
// for(int i=2;i<100;i++){
//     a[i] = a[i-1]+a[i-2];
//     cout<<a[i]<<" ";
// }
return 0;
}