#include <iostream>
using namespace std;

int main()
{
    int a[5][5];
    int c=0,d=0,r=0;

    for(int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1 )
            {
                c=i+1;
                d=j+1;
            }
           
        }
    }
    if(c>3)
    {
        r=c-3;
    }
    else
    {
        r=3-c;
    }
    if(d>3)
    {
        r+=d-3;
    }
    else
    {
        r+=3-d;
    }

    cout<<r<<endl;
          
}