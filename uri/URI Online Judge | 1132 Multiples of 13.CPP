#include <iostream>
using namespace std;

int main()
{
    int a,b,c=0,d=0,j;
    int ar[j];
    cin>>a>>b;

    if(a<b)
    {
    for (int i = a; i < b; i++)
    {
        if(i%5 ==2 || i%5 ==3)
        {
            cout<<i<<endl;
        }

    }
    }
    else
    {
        for (int i = b; i < a; i++)
        {
        if(i%5 ==2 || i%5 ==3)
        {
            cout<<i<<endl;
        }

        }
    }
    
    return 0;
}