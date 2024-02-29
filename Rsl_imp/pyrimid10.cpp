#include <iostream>
using namespace std;
int main(){
for(int i=1;i<=4;i++){
    int k = 1;
    for(int j=1;j<=7;j++){
        if(j>=5-i && j<=3+i && k==1){
            cout<<"*";
            k=0;
        }    
        else{
            cout<<" ";
            k=1;
        }    
    }
    cout<<endl;
}
return 0;
}