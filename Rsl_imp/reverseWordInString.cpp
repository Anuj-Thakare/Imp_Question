#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    string a ="";
    vector<string>v;
    for(int i=0;i<s.size();i++){
        if(s[i]!='.') a+=s[i];
        else{
            v.push_back(a);
            a = "";
        }
    }
    v.push_back(a);
    reverse(v.begin(), v.end());
    for(int i=0;i<v.size();i++){
        if(i!=v.size()-1){
            cout<<v[i]<<".";
        }else{
            cout<<v[i];
        }
    }
    return 0;
}