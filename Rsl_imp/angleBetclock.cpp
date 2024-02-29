#include <iostream>
using namespace std;
int main(){
    int h;
    int m;
    cout<<"Enter hours: ";
    cin>>h;
    cout<<"Enter Min: ";
    cin>>m;
    float ans = abs(30*h - (11/2)*m);
    if(ans>180) ans-=180;
    cout<<ans;
return 0;
}