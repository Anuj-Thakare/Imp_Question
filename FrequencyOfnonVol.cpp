#include <bits/stdc++.h>
using namespace std;

void tochangetolowercase(string &s){
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z')  s[i] = s[i] + 32 ;
    }
}

int main(){
    string s = "RajaSoftwareLabs";
    
    tochangetolowercase(s);
    // map<char,int>mp;
    // for(int i=0;i<s.size();i++) mp[s[i]]++;

    // int sum = 0;
    // for(auto it : mp){
    //     if(it.first!='a' && it.first!='e' && it.first!='i' && it.first!='o' && it.first!='u' ){
    //         cout<<it.first<<": "<<it.second<<endl;
    //     }
    //     else{
    //         sum += it.second;
    //     }
    // }
    // cout<<sum<<endl;

    int n = s.size();
    int visit[n] = {0};
    for(int i=0;i<n;i++){
        int cnt = 1;
        if(visit[i] != 1){
            for(int j=i+1;j<n;j++){
                if(s[i] == s[j]){
                    cnt++;
                    visit[j] = 1;
                }
            }
        }
        cout<<s[i]<<" "<<cnt<<endl;
    }

return 0;
}