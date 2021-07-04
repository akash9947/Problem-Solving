#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    
    double a,b,c,d,e;  
    int f;
   
    while(cin>>a && a!=0)
    {
             
        cin>>b>>c;
        c=c/100;
        d=a*b;
        e=d/c;
        f=sqrt(e);
        cout<<f<<endl;

    }
}
