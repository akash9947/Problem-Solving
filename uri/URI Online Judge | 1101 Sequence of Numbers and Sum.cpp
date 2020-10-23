#include <iostream>

using namespace std;

int main()
{
    int a,b,d;

    for(int i=0;i<3;i++)
    {
        int c=0;
        cin>>a>>b;
        if(b>a)
        {
            d=a;
            a=b;
            b=d;
        }

        if(a!=0 && b!=0)
        {
            for (int j=b;j<=a;j++)
            {
                c+=j;
                cout<<j<<" ";
            }
            cout<<"Sum="<<c<<endl;
        }
    }

}