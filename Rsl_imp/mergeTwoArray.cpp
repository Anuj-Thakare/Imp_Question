#include <iostream>
using namespace std;
int main(){
    int a[4] = {1,3,5,7};
    int b[5] = {2,4,6,8,9};
    int c[9];
    int i=0,j=0,k=0;
    while(i<4 && j<5){
        if(a[i]<b[j]){
            c[k++] = a[i];
            i++;
        }else{
            c[k++] = b[j];
            j++;
        }
    }
    while(i<4){
        c[k++] = a[i];
        i++;
    }
    while(j<5){
        c[k++] = b[j];
        j++;
    }
    for(int k=0;k<4+5;k++){
        cout<<c[k]<<" ";
    }

    // int a[] = {2,3,2,1,0,0,0,0,0};
    // int b[] = {7,6,5,8,6};
    // int s=sizeof(a)/sizeof(a[0]);
    // int t=sizeof(b)/sizeof(b[0]);
    // int k=s-1,j=t-1,i=k-j+1;
    // while(i>=0 && j>=0){
    //     if(a[i]>b[j]){
    //         a[k--] = a[i];
    //         i--;
    //     }else{
    //         a[k--] = b[j];
    //         j--;
    //     }
    // }
    // while(i>=0){
    //     a[k--] = a[i];
    //     i--;
    // }
    // while(j>=0){
    //     a[k--] = a[j];
    //     j--;
    // }
    // for(int k=0;k<s;k++){
    //     cout<<a[k]<<" ";
    // }

    return 0;
}