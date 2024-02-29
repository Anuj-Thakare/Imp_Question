#include <iostream>
using namespace std;
int main(){
int year,n;
cin>>year>>n;
year++;
int cnt=0;
bool leap = false;
while(n!=cnt){
    if(year%4==0 && year%100!=0 || year%400==0){
        cout<<year<<endl;
        leap = true;
        cnt++;
    }
    if(!leap)   year++;
    else    year += 4;
}
return 0;
}