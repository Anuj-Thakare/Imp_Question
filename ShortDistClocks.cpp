#include <iostream>
using namespace std;
int main(){
cout<<"Enter two time "<<endl;
cout<<"Enter h1 and m1 "<<endl;
int h1,h2,m1,m2;
cin>>h1>>m1;
cout<<"Enter h2 and m2 "<<endl;
cin>>h2>>m2;
int h,m;
if(h1>h2){
    h = min(h1-h2, 24-(h1-h2));
}
else{
    h = min(h2-h1, 24-(h2-h1));
}


if(m1>m2)   m = min(m1-m2, 60-(m1-m2));
else    m = min(m2-m1, 60-(m2-m1));

cout<<"Shortest distance is "<<h+m<<endl;
    


return 0;
}