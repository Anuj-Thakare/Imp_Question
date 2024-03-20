#include <iostream>
using namespace std;
int main(){
    string s = "ABCD";
    for(int i=0;i<s.size();i++){
        s[i] = s[i] -'A' + 'a';
    }
    cout<<s;
    return 0;
}