#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {-2,1,-3,4,-1,2,1,-5,4};
    int sum=0;
    int maxi=INT_MIN;
    for(int i=0;i<9;i++){
        sum+=a[i];
        maxi=max(maxi,sum);
        if(sum<0) sum=0;
    }
    cout<<maxi<<endl;
    return 0;
}