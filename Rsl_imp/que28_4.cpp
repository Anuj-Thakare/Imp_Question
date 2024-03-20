#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int a = n-1,b = n+1;
    while(1){
        bool isprime1=true;
        for(int j=2;j<a;j++){
            if(a%j==0){
                isprime1=false;
            }
        }
        bool isprime2=true;
        for(int j=2;j<b;j++){
            if(b%j==0){
                isprime2=false;
            }
        }
        if(isprime1 && isprime2 && a>1){
            cout<<a<<" "<<b;
            return 0;
        }
        if(isprime1 && a>1){
            cout<<a;
            return 0;
        }
        if(isprime2){
            cout<<b;
            return 0;
        }
        a--;
        b++;
    }

    return 0;
}