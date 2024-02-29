#include <bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    // cin>>n1>>n2;
    n1 = 3,n2 =3;
    char ch1[n1] = {'1','2','3'};
    char ch2[n2] = {'a','b','c'};

    // for(int i=0;i<n1;i++)   cin>>ch1[i];
    // for(int i=0;i<n2;i++)   cin>>ch2[i];
     
    int i;
    for(int i=0;i<n1 ;i++){
        cout<<ch1[i]<<" "<<ch2[i]<<" ";
    }

    while(i!=n1){
        cout<<ch1[i]<<" ";
        i++;
    }   
    while(i!=n2){
        cout<<ch2[i]<<" ";
        i++;
    }   
     

return 0;
}