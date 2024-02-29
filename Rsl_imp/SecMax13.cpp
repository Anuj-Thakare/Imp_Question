#include <iostream>
using namespace std;
int main(){
int arr[] = {4,3,7,9,31};
int maxi = -1;
int seco_max = -2;
for(int i=0;i<5;i++){
    if(arr[i]>maxi){
        seco_max = maxi;
        maxi = arr[i];
    }
    else if(arr[i]>seco_max)    seco_max = arr[i];
}

cout<<"Second Max "<<seco_max<<endl;
return 0;
}