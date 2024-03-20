#include <iostream>
using namespace std;
int main(){
int a[11] = {0,1,2,3,4,5,6,7,8,9,16};
int cnt=0;
for(int i=0;i<11;i++){
    if(a[i] == 1) cnt=1;

    
    while(a[i]){
        if(a[i]%2==0){
            a[i] /= 2;
        }else{
            break;
        }
        if(a[i] == 1) cnt++;
    }
}
    cout<<cnt<<endl;
return 0;
}