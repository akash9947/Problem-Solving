#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a,j;
    cin>>a;
    if(a%2==0)
    {
        a++;
    }

    for(int i=0;i<12;i=i+2)
    {
        j=a+i;
       cout<<j<<endl;
    }

    return 0;
}