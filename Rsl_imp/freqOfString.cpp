#include <iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    int n = s.size();
    int visited[] = {0};
    for(int i=0;i<n;i++){
        int cnt=1;
        if(visited[i]!=1){
            for(int j=i+1;j<n;j++){
                if(s[i]==s[j]){
                    cnt++;
                    visited[j]=1;
                }
            }
            cout<<s[i]<<" : "<<cnt<<endl;
        }
    }
    return 0;
}