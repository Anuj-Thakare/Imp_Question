#include <iostream>
using namespace std;
int main()
{
    int n = 50;
    for (int j = 10; j <= 50; j++)
    {
        int f = 0;
        for (int i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                f = 1;
                break;
            }
        }
        if(f==0)    cout<<j<<" ";
    }
    return 0;
}