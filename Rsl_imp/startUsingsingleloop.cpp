#include <iostream>
using namespace std;
int main(){
    string s = "*";
for(int i=1;i<=5;i++){
    cout<<s;
    s += '*';
    cout<<endl;
}
return 0;
}