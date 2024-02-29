// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "i.like.this.program.very.much";

    string ans = "";
    string word = "";
    int n = s.size();
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(s[i]!='.')   word += s[i];
        else{
            cout<<word<<endl;
            if(cnt==0){
                ans += word;
                cnt = 1;
            }
            else{
                ans += ".abc.";
                cnt = 0;
            }
            word = "";
        }

    }
    if(cnt==0)  ans += word;
    else    ans += ".abc";
    cout<<ans<<endl;

    // string s = "i.like.this.program.very.much";

    // string ans = "";
    // string word = "";
    // vector<string> st;
    // int n = s.size();
    // int cnt = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (s[i] != '.')
    //         word += s[i];
    //     else
    //     {
    //         // cout << word << endl;
    //         st.push_back(word);
    //         word = "";
    //     }
    // }
    // st.push_back(word);
    // reverse(st.begin(),st.end());
    // for(int i=0;i<st.size();i++){
    //     if(i!=st.size()-1)cout<<st[i]<<".";
    //     else    cout<<st[i];
    // }    

    return 0;
}