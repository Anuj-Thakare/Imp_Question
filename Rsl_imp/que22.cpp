#include <iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    string st = "";
    int cnt=1;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            cnt++;
        }
        else{
            st+=s[i-1] + to_string(cnt);
            cnt=1;
        }
    }
    st+=s[s.size()-1]+to_string(cnt);
    if(st.size()<s.size()) cout<<st;
    else cout<<s;
    return 0;
}