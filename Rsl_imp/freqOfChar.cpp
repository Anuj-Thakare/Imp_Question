#include <bits/stdc++.h>
using namespace std;

void Countbymap(string s){
    map<char,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    for(auto it:mp){
        cout<<it.first<<" : "<<it.second<<endl;
    }
}

void Countfreq(string s){
    int n = s.size();
    int visited[n] = {0};
    for(int i=0;i<n;i++){
        int cnt = 1;
        if(visited[i]!=1){
            for(int j=i+1;j<n;j++){
                if(s[i]==s[j]){
                    visited[j]=1;
                    cnt++;
                }
            }
            cout<<s[i]<<" : "<<cnt<<endl;
        }
    }
}

void Count(string s){
    int n = s.size();
    int freq[n] = {0};
    for(int i=0;i<n;i++){
        freq[s[i]-'a']++;
    }
    for(int i=0;i<n;i++){
        if(freq[s[i]-'a']!=0)   cout<<s[i]<<" : "<<freq[s[i]-'a']<<endl; 
    }
}

int main(){
string s;
cout<<"Enter the string  ";
cin>>s;

// Using Map
// Countbymap(s);

// Without Using map or stl
// Countfreq(s);

Count(s);
return 0;
}