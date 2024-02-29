#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int x = n%10;
n /= 10;
int f1 = 0;
int f2 = 0;
while(n){
    int d = n%10;
    if(x < d) f1 = 1; 
    if(x > d) f2 = 1; 
    x = d;
    n /= 10;
}
if(f1==0)    cout<<"Ascending ";
else if(f2==0)  cout<<"Decending ";
else    cout<<"Not specified";
return 0;
}