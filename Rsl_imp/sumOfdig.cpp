#include <iostream>
using namespace std;
int main(){
   long long int n;
   cout<<"Enter the number: ";
   cin>>n;
   int sum=0;
   while(n){
    int d=n%10;
    sum+=d;
    n/=10;
   }
   cout<<"Sum of all digits in number is: "<<sum<<endl;
return 0;
}