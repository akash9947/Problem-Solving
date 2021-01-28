#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a,b=0,j=0;
    
    while (1)
    {
        cin>>a;
        if(a<0)
        break;

        b=b+a;
        j++;
    }

    cout<<setprecision(2)<<fixed<<b/j<<endl;
    return 0;
}