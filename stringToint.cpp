#include <bits/stdc++.h>
using namespace std;
int main(){
string st = "1013";
int it = 1234;
int n = st.size();
int num = 0;

// by inbuilt functions
int a = stoi(st);
cout<<"answer in int using inbuilt "<<a<<endl;

string s = to_string(it);
cout<<"answer in string using inbuilt "<<s<<endl;

for(int i=0;i<n;i++){
    int d = st[i] - '0';
    num = num*10 + d;
}

string ans = "";
while(it){
    int d = it%10;
    ans += d + '0';
    it /= 10;
}
reverse(ans.begin(),ans.end());
cout<<num<<endl;
cout<<ans<<endl;
return 0;
}