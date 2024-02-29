#include <iostream>
using namespace std;

void fun(int n,int x){
    if(n==0)    return;

    int d = n%10;
    int y = x * d;
    fun(n/10,x*10);
    cout<<y<<" + ";
}

int main(){
int n = 4386;

fun(n,1);
// while(n){
//     int d = n%10;

// }
return 0;
}