#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    int freq[27] = {0};
    int n = s.size();

    // By using map
    // map<char,int>mp;
    // for(int i=0;i<n;i++){
    //     mp[s[i]]++;
    // }
    // for(auto it:mp){
    //     if(it.second>1){
    //         cout<<"String is not unique"<<endl;
    //         return 0;
    //     }
    // }
    // cout<<"string is unique"<<endl;


    //Second method
    for(int i=0;i<n;i++){
        freq[s[i]-'a']++;
    }
    for(int i=0;i<n;i++){
        if(freq[s[i]-'a']>1){
            cout<<"String is not unique"<<endl;
            return 0;
        }
    }
    cout<<"String is unique"<<endl;
    return 0;
}