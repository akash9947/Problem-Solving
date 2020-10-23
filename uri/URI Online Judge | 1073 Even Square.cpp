#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    int a,b;

    cin>>a;

    for (int i=1;i<=a;i++)
    {
        if(i%2==0)
        {   
            b=pow(i,2);
            cout<<i<<"^"<<"2"<<" = "<<b<<endl;
        }
    }

    return 0;
}