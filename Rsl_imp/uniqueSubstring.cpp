#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "aabcdefabc";
    int maxi=0;
    // int n=s.size();
    // int i,j,start,end,cnt;
    // for(i=0;i<n;i++){
    //     cnt=1;
    //     for(j=i+1;j<n;j++){
    //         if(s[j]!=s[i]){
    //             cnt++;
    //             maxi=max(maxi,cnt);
    //         }else{
    //             i=j-1;
    //             break;
    //         }
    //     }
    // }
    // for(int k=start;k<=end;k++) cout<<s[k]<<" ";
    // if(maxi>cnt)
    // cout<<maxi<<" ";
    // else cout<<cnt<<" ";
    set<char>st;
    int start=0,end=0;
    while(start<s.size()){
        auto it = st.find(s[start]);
        if(it==st.end()){
            if(start-end+1>maxi){
                maxi=start-end+1;
            }
            st.insert(s[start]);
            start++;
        }else{
            st.erase(s[end]);
            end++;
        }
    }
    cout<<maxi<<" ";
    return 0;
}


