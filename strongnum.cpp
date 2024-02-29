#include <iostream>
using namespace std;

int fact(int d){
    int fac = 1;
    for(int i=2;i<=d;i++){
        fac *= i;
    }

    return fac;

}

int main(){
int num = 146;
int n = num;
int sum = 0;
while(n){
    int d = n%10;
    sum += fact(d);
    n /= 10;
}
if(sum == num)  cout<<"YES"<<endl;
else  cout<<"NO"<<endl;
return 0;
}