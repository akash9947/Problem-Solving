#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    for (int i=0;i<a;i++)
    {
        string str;
        int b;
        char c,d;
        cin>>str;
        b=str.length();

        if(b<=10)
        {
            cout<<str<<endl;
        }
        else
        {
            for(int i=0;i<b;i++)
            {
                if(i==0)
                {
                    c=str[i];
                }
                
                if(i==b-1)
                {
                    d=str[i];
                }
            }
            cout<<c<<b-2<<d<<endl;
        }
        
    }
}