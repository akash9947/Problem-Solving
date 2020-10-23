#include <iostream>
using namespace std;

int main()
{
    int n,a=1,b=2,c=3;
    cin>>n;

    for (int i=0;i<n; i++)
    {
        cout<<a<<" "<<b<<" "<<c<<" "<<"PUM"<<endl;
        a=a+4;
        b=b+4;
        c=c+4;
    }
    

    return 0;
}