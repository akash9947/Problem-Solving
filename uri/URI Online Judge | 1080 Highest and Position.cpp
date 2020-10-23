#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    int n,a=0,b=0;
    for(int i=1;i<=100;i++)
    {
        cin>>n;
        if(n>a)
        {
            a=n;
            b=i;
        }

    }

    cout<<a<<endl;
    cout<<b<<endl;


    return 0;
}