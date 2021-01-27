#include <iostream>
#include <algorithm>
#include <cmath> 
#include <iomanip>
using namespace std;

int main(){
    double a,b,c,d,p;

    cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a)
    {
        p=a+b+c;
        cout<<setprecision(1)<<fixed<<"Perimetro = "<<p<<endl;
    }

    else
    {
        d=((a+b)*c)/2;
        cout<<setprecision(1)<<fixed<<"Area = "<<d<<endl;
    }

    return 0;
}