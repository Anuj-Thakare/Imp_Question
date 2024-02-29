#include <iostream>
using namespace std;
int main(){
string s = "1012";

cout<<"Using STOI function "<<stoi(s)<<endl;
int ans = 0;
int a = 1;
for(int i=0;i<s.size();i++){
    int d = s[i] - '0';
    ans = ans*10 + d;
    // a*=10; 
}
cout<<"Without using inbuilt "<<ans<<endl;
return 0;
}