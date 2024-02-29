#include <bits/stdc++.h>
using namespace std;
int main(){
int n = 11111111;
int sum = 0,i=0;
int x = 1;
while(n){
    int d = n%10;
    if(d){
        // sum += pow(2,i);
        sum += x;
    }
    x *= 2;
    i++;
    n = n / 10; 
}

cout<<"Decimal no. "<<sum<<endl;
return 0;
}