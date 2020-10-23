#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    double n,a,b,c,d;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        d=((a*2)+(b*3)+(c*5))/10;
        cout<<setprecision(1)<<fixed<<d<<endl;

    }

    return 0;
}