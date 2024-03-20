#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 101010;
    int s = 0,i=0;
    while(n){
        int d=n%10;
        if(d==1) s+=pow(2,i);
        n/=10;
        i++;
    }
    cout<<s;
    return 0;
}