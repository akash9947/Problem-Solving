#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a=0,b=0,i,j;

    for( i=1,j=1; i<=39 ; i=i+2,j=j+j )
    {
        a=i/j;
        b+=a;
    }

    cout<<setprecision(2)<<fixed<<b<<endl;

    return 0;
}