#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "amazomn";
    int n = s.size();
    int freq[27] = {0};

    for(int i=0;i<n;i++){
        freq[s[i]-'a']++;
    }

    for(int i=0;i<n;i++){
        if(freq[s[i]-'a']==1){
            cout<<s[i]<<endl;
            break;
        }   
    }
    return 0;
}   

// input : aabcdeb
// output: c


