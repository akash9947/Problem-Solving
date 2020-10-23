#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
   double i,j,c=1,d=3;

   for(double a=0;a<=2;a=a+0.2)
   {
        for(j=c;j<=d;j++)
        {
            cout<<"I="<<a<<" "<<"J="<<j<<endl;

        }
        c=c+0.2;
        d=d+0.2;
   }
    return 0;
}