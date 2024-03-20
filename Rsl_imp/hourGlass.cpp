#include <bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter the number of rows: ";
    cin>>r;
    cout<<"Enter the number of columns: ";
    cin>>c;
    int m[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>m[i][j];
        }
    }
    int sum=0;
    int g=INT_MIN;
    for(int i=0;i<r-2;i++){
        for(int j=0;j<c-2;j++){
            sum = m[i][j]+m[i][j+1]+m[i][j+2]+m[i+1][j+1]+m[i+2][j]+m[i+2][j+1]+m[i+2][j+2];
            g=max(g,sum);
        }
    }
    cout<<"maximum hourglass is: "<<g<<endl;
    return 0;
}