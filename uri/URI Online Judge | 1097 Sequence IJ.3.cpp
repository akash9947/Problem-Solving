#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
   int i,j,c=5,d=7;

   for(int a=1;a<=9;a=a+2)
   {
        for(i=1,j=d;j>=c;j--)
        {
            cout<<"I="<<a<<" "<<"J="<<j<<endl;

        }
        d=d+2;
        c=c+2;
   }
    return 0;
}