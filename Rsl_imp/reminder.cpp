#include <iostream>
using namespace std;
int main(){
    int a[6] = {19,10,44,3,11,129};
    for(int i=0;i<6;i++){
        if(a[i]%5==4){
            cout<<a[i]<<" ";
        }
    }
return 0;
}