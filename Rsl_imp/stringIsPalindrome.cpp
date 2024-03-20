#include <iostream>
using namespace std;
int main(){
    string st;
    cout<<"Enter the string: ";
    cin>>st;
    int s=0,e=st.size()-1;
    while(s<=e){
        if(st[s]!=st[e]){
            cout<<"String is not palindrom"<<endl;
            return 0;
        }
        s++;
        e--;
    }
    cout<<"String is Palindrome"<<endl;
    return 0;
}