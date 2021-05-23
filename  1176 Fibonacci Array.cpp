#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        int f;
        long long a=0,b=1,c,d,r;
        cin>>f;
        for(int j = 0;j<=f;j++)
        {
            c=a+b;
            d=a;
            a=b;
            b=c;
            if(j==f)
            {
                r=d;
                break;
            }
        }
        cout<<"Fib("<<f<<") = "<<r<<endl;
    }
}