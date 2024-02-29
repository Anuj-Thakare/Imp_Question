#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int n = s.size();
bool isbalanced = true;
string ans = "";
stack<char>st;
int i = 0;
while(i<n){
    if(s[i]=='(' || s[i]=='{' || s[i]=='['){
        st.push(s[i]);
        ans += s[i];
    } 

    else if(!st.empty() && ((st.top()=='(' && s[i]==')') || (st.top()=='{' && s[i]=='}') || (st.top()=='[' && s[i]==']')) ){
        st.pop();
        ans += s[i];
    }    
    else    {
        isbalanced = false;
        if(!st.empty() && st.top()=='{')   ans += '}';
        else if(!st.empty() && st.top()=='(' )  ans += ')';
        else if(!st.empty() && st.top()=='[') ans+= ']';   
        // else    cout<<"hello"<<endl;
        if(!st.empty()) st.pop();
        if(s[i]==')'){
        

            ans += '(';
            ans += ')';
        }
        else if(s[i]=='}'){
            ans += '{';
            ans += '}';
        }
        else if(s[i]==']'){
            ans += '[';
            ans += ']';
        }
        
        }
    
   
    i++;
}
// cout<<ans<<endl;
if(st.empty() && isbalanced)  cout<<"Balanced "<<endl;
else {
    while(!st.empty()){
        if(st.top()=='(')   ans += ')';
        else if(st.top()=='{')  ans+='}';
        else if(st.top()=='[')  ans += ']';
        st.pop();
    }
     cout<<"NOt Balanced "<<endl;
}  


cout<<"Corrected String "<<ans<<endl;
return 0;
}