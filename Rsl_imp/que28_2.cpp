#include <iostream>
using namespace std;
void bubble(int A[], int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        int flag=0;
        for(j=0;j<n-1-i;j++){
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0) break;
    }
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    bubble(A,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}