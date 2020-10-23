#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main()
{ 
    double a,b;
    cin>>a;

    if(a>4500.00)
    {
        b=(a-4500.00)*28/100+(1499.99*18/100)+(999.99*8/100);
        cout<<setprecision(2)<<fixed<<"R$ "<<b<<endl;
    }

    else if(a>3000.01)
    {
        b=(a-3000.01)*18/100+(999.99*8/100);
        cout<<setprecision(2)<<fixed<<"R$ "<<b<<endl;
    }
    else if(a>2000.01)
    {
        b=(a-2000.01)*8/100; 
        cout<<setprecision(2)<<fixed<<"R$ "<<b<<endl;
    }
    else
    {
        cout<<"Isento"<<endl;
    }
    
    


    return 0;
}