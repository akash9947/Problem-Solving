#include <iostream>
using namespace std;

int main()
{
    int n,a=1,b=1,c=1;
    cin>>n;

    for (int i=0;i<n; i++)
    {
        cout<<a<<" "<<b<<" "<<c<<endl;
        for (int j = 0; j < 1; j++)
        {
            b=b+1;
            c=c+1;
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        a=a+1;
        b=a*a;
        c=a*b;        
    }
    
    return 0;
}