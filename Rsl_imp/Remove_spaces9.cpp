#include <iostream>
using namespace std;
int main(){
string st;
// cin>> st;
getline(cin,st);
 
for(int i=0;i<st.size();i++){
    if(st[i]==' '){
        st[i] = '%';
        // s += st[i];
    }
     
}
cout<<"ans "<<st<<endl;
return 0;
}