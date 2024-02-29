#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[12] = {1,2,3,4,3,2,1,9,8,32,1,1};
    // int m=INT_MIN;
    // for(int i=0;i<7;i++){
    //     for(int j=i+1;j<7;j++){
    //         if(a[i]==a[j]){
    //             m=max(m,j-i);
    //         }
    //     }
    // }
    // cout<<m<<endl;

    vector<pair<int,int>>p;

    for(int i=0;i<12;i++){
        p.push_back(make_pair(a[i],i));
    }

    sort(p.begin(),p.end());

    int ans = 0;
    for(int i=0;i<11;i++){
        int x1 = p[i].first;
        int x2 = p[i].second;
         
        while(x1==p[i+1].first){
            ans = max(ans,abs(p[i+1].second-x2));
            i++;
        }
    }
    cout<<ans<<endl;
return 0;
}