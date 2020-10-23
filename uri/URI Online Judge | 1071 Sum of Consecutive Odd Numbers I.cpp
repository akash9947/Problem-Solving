#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a,b,c,d=0;
    cin>>a>>b;

        if(a<0)
        {
            a=a*(-1);
        }
        if(b<0)
        {
            b=b*(-1);
        }

        if(b>a)
        {
            c=a;
            a=b;
            b=c;
            b++;
        }

        for (int i=b;i<a;i++)
        {
            if(i%2!=0)
            {
                d=d+i;
            }

        }  
        cout<<d<<endl;

    

     return 0;
}