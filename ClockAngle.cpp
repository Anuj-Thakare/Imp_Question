#include <iostream>
using namespace std;
int main(){
float hr = 3;
float m = 30;

if(hr>12 && m>60)   cout<<"entered wrong input";

float angle = abs(30*hr-5.5*m);
cout<<"angle is "<<angle<<endl;
return 0;
}