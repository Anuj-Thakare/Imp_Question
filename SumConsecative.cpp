#include <bits/stdc++.h>
using namespace std;
int main(){
int arr[8] = {8,7,5,4,7,2,1,2};
int sum = 0;
int maxi = INT_MIN;
for(int i=0;i<7;i++){
    sum = arr[i]+arr[i+1];
    maxi = max(maxi,sum);
}
cout<<maxi<<endl;
return 0;
}