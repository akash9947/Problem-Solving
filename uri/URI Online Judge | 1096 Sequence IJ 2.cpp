#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
   int i,j;

   for(int a=1;a<=9;a=a+2)
   {
        for(i=1,j=7;j>=5;j--)
        {
            cout<<"I="<<a<<" "<<"J="<<j<<endl;

        }
   }
    return 0;
}