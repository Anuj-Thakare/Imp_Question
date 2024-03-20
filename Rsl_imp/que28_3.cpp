#include <iostream>
using namespace std;
int main(){
    string s = "1234";
    int n = 0;
    for(int i=0;i<s.size();i++){
        int d=s[i]-'0';
        n=n*10+d;
    }
    cout<<n;
    return 0;
}