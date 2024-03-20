#include <iostream>
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
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i>=j){
                sum+=m[i][j];
            }
        }
    }
    cout<<"Sum of lower triangular matrix is: "<<sum;

    return 0;
}