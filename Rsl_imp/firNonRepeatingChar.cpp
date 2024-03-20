#include <iostream>
using namespace std;
int main(){
    string st;
    cout<<"Enter the string: ";
    cin>>st;
    int freq[27] = {0};
    for(int i=0;i<st.size();i++){
        freq[st[i] - 'a']++;
    }
    for(int i=0;i<st.size();i++){
        if(freq[st[i] - 'a']==1){
            cout<<st[i]<<endl;
            return 0;
        }
    }
    cout<<"Not found"<<endl;
    return 0;
}