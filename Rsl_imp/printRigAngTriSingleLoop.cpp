#include <iostream>
using namespace std;
int main(){
    string s = "*";
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=n-i;k>=1;k--){
            cout<<" ";
        }
        cout<<s;
        cout<<endl;
        s+="*";
    }
    return 0;
}