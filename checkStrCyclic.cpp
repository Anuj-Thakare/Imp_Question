#include <iostream>
using namespace std;
int main(){
string s1 = "ABCD";
string s2 = "CDAB";

for(int i=0;i<4;i++){
        int j=i;
        while(s1[i]==s2[j]){
        if(j==3)    j=0;
    }
}
return 0;
}