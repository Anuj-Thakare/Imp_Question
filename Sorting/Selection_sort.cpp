#include <iostream>
using namespace std;

void selection(int arr[],int n){
    for(int i=0;i<n;i++){
        int x = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[x]){
                x = j;
            }
        }
        swap(arr[i],arr[x]);
    }

    for(int i=0;i<n;i++)    cout<<arr[i]<<" ";
}

int main(){
int arr[] = {3,2,1,7,6};
int n = sizeof(arr)/sizeof(arr[0]);
selection(arr,n);
return 0;
}