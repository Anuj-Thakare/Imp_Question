#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    map<char,int>mp1;
    map<char,int>mp2;
    int n1 = s1.size();
    int n2 = s2.size();
    if(n1!=n2){
        cout<<"Not an Anagrams ";
        return 0;
    }

    // for(int i=0;i<n1;i++){
    //     mp1[s1[i]]++;
    //     mp2[s2[i]]++;

    // }
    // if(mp1==mp2)    cout<<"Anagram ";
    // else    cout<<"Not Anagram ";
    

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    if(s1==s2)  cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;
    cout<<s1<<" "<<s2<<endl;

return 0;
}