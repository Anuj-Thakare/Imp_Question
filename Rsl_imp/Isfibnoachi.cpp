#include <bits/stdc++.h>
using namespace std;

bool perfectsquare(int x){
    int root = sqrt(x);
    return (root*root ==x);
}

bool fib(int n){
    if(perfectsquare(5*n*n + 4) || perfectsquare(5*n*n - 4))    return true;
    else    return false;
}

int main(){
int n;
cin>>n;


//  First Method

// int a = 0, b=1,c=1;
// while(c<n){
//     a = b;
//     b = c;
//     c = a+b;
// }
// if(c==n)    cout<<"It is a Fib"<<c<<endl;
// else{
//     int sum = 0;
//     for(int i=0;i<n;i+=2){
//         sum += i;
//     }
//     cout<<"Sum Even is "<<sum<<endl;
// }


// Second Method
if(fib(n))  cout<<"yes "<<n<<endl;
else{
    int sum = 0;
    for(int i=0;i<n;i+=2){
        sum += i;
    }
    cout<<"Sum Even is "<<sum<<endl;
}
return 0;
}