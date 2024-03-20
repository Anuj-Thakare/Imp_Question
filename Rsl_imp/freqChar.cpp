#include <iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    int freq[27] = {0};
    for(int i=0;i<s.size();i++){
        freq[s[i] - 'a']++;
    }
    for(int i=0;i<27;i++){
        if(freq[i]>1){
            cout<<"String is not unique";
            return 0;
        }
    }
    cout<<"String is unique";
    return 0;
}