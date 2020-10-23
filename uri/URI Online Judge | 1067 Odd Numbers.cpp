#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a;
    cin>>a;

    for(int i=1;i<=a;i++)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
        }
    }

    return 0;
}