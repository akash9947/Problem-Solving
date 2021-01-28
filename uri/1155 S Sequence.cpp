#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a=0,b=0,i;

    for( i=1; i<=100 ; i++ )
    {
        a= 1/i;
        b=b+a;
    }

    cout<<setprecision(2)<<fixed<<b<<endl;

    return 0;
}