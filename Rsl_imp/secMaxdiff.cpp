#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[8] = {12,14,70,15,95,65,22,30};
    int m1=INT_MIN;
    int m2=INT_MIN;
    int s1=INT_MAX;
    int s2=INT_MAX;
    for(int i=0;i<7;i++){
        if(a[i]>m1){
            m2=m1;
            m1=a[i];
        }
        else if(a[i]>m2) m2=a[i];

        if(a[i]<s1){
            s2=s1;
            s1=a[i];
        }
        else if(a[i]<s2) s2=a[i];
    }
    
    if(m2-s1  > m1-s2) cout<<m2-s1;
    else cout<<m1-s2;


    int max_diff = INT_MIN;
    int sec_max_diff = INT_MIN;
    int mini = a[0];

    for(int i=1;i<8;i++){

        if(a[i]<mini) mini = a[i];
        if(a[i]-mini > max_diff){
            sec_max_diff = max_diff;
            max_diff = a[i]-mini;
        }
        else if(a[i]-mini > sec_max_diff ){
            sec_max_diff = a[i] - mini;
        }

        
    }
    cout<<"Answer by second method ";
    cout<<max_diff<<"  "<<sec_max_diff<<endl;
return 0;
}