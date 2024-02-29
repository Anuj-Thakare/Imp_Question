#include <iostream>
using namespace std;
int main(){
    int arr[] = {2,3,4,2,3} ; 

    int sum = 0;
    for(int i=0;i<7;i++){
        sum += arr[i];
    }

    int leftsum = 0;
    int rightsum = sum - arr[0];
    int ans;
    for(int i=0;i<7;i++){
        leftsum += arr[i];
        ans = arr[i+1];
        rightsum -= ans;
        
        if(leftsum==rightsum){
            cout<<"Index as "<<i+1<<endl;
            return 0;
        } 
    }
    cout<<"Not found equilibrium"<<endl;

    // int s = 0, e = 6;
    // int sum1 = 0;
    // int sum2 = 0;
     
    // while(s<=e){
    //     if(sum1==sum2 && e==s){
    //         cout<<"Index is "<<e<<endl;
    //         return 0;
    //     } 
    //     else if(sum1>sum2){
    //         sum2 += arr[e];
    //         e--;
    //     }
    //     else{
    //         sum1 += arr[s];
    //         s++;
    //     }
    //     // cout<<sum1<<" "<<sum2<<endl;
    // }
    // cout<<"-1"<<endl;
return 0;
}   