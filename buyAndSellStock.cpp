#include <iostream>
using namespace std;
int main(){
int a[] = {100, 180, 260, 310, 40, 535, 695};
int n = 7;
int buy=a[0];
int profit  = 0;
for(int i=0;i<7;i++){
    profit = max(profit,a[i]-buy);
    buy = min(buy,a[i]);
}
cout<<profit<<endl;
return 0;
}