#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int coef=1;
        for(int k=n-i;k>=1;k--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<coef<<" ";
            coef=coef*(i-j)/j;
        }
        cout<<endl;
    }
    return 0;
}

//    1 
//   1 1 
//  1 2 1 
// 1 3 3 1 