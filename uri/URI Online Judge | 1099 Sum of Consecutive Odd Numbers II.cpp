#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
   int n,a,b,d;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       int c=0;
       cin>>a>>b;
       if(b>a)
       {
           d=a;
           a=b;
           b=d;
       }
        if(a==b)
        {
            c=0;            
        }
   
       for( int x=b+1;x<a;x++)
       {
           if(x%2 !=0)
           {
               c=c+x;
           }
       }
       cout<<c<<endl;
   }
    return 0;
}