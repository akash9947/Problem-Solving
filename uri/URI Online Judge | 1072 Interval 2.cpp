#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a,b=0,c=0,d;
    cin>>d;

    for(int i=0;i<d;i++)
    {
        cin>>a;

        if(a>=10 && a<=20)
        {
            b++;
        }
       else
        {
            c++;
        }
    }

    cout<<b<<" in"<<endl;
    cout<<c<<" out"<<endl;



    return 0;
}