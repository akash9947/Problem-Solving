#include <iostream>

using namespace std;

int main()
{
    while(1)
    {
        int a,b=0;
        cin>>a;
        if(a==0)
        break;
  
        if(a%2!=0)
        {
          a=a+1;
        }

        for(int i=0;i<5;i++)
        {
            b+=a;
            a+=2;
        }

        cout<<b<<endl;
    }
    return 0;
}