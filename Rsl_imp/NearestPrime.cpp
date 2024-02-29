#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    if(n<2){
        cout<<"2";
        return 0;
    }
    int a=n-1;
    int b=n+1;
    int j;
    while(1) {
        bool isPrime1=true;
        for(j=2;j<a;j++){
            if((a%j)==0){
                isPrime1=false;
                break;
            }
        }
        bool isPrime2=true;
        for(j=2;j<b;j++){
            if((b%j)==0){
                isPrime2=false;
                break;
            }
        }
        if(isPrime1 && isPrime2 && a>=2){
            cout<<a<<" "<<b;
            break;
        }
        else if(isPrime1 && a>=2){
          cout<<a;
          break;
        } 
        else if(isPrime2){
            cout<<b;
            break;
        }
        a--;
        b++;
    }

    return 0;
}
