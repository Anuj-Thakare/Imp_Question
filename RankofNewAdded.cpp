#include <bits/stdc++.h>
using namespace std;

 
int main(){
int n ;
cin>>n;

int arr[] = {39,38,38,36,34,31,28};

set<int>st;
for(int i=0;i<7;i++){
    st.insert(arr[i]);
}
vector<int>a;
for(auto it:st){
    cout<<it<<" ";
    a.push_back(it);
}
cout<<endl;
int s = 0, e = a.size()-1;
int size = a.size();
while(1){
    int mid = (s+e)/2;
    // cout<<"mid "<<mid<<" ";
    if(n==a[mid]){
        cout<<"Rank of n is "<<size-mid<<endl;
        break;
    }
    else if(s==e && n > a[mid]){
        cout<<"Rank of n is "<<size-mid<<endl;
        break;

    }
    else if(s==e && n < a[mid] || e<0){
        cout<<"Rank of n is "<<size-mid+1<<endl;
        break;

    }
    else if(n>a[mid]){
        s = mid+1;
    }
    else{
        e = mid-1;
    }
}

return 0;
}