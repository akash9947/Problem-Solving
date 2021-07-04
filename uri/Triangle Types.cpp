#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;

 int main()
 {
        double a,b,c;
        cin>>a>>b>>c;
        double ar[3]={a,b,c};
        sort(ar,ar+3,greater<double>());
        
        a=ar[0];
        b=ar[1];
        c=ar[2];


        if(a >= b + c)
        {
            cout<<"NAO FORMA TRIANGULO"<<endl;
        }
        if(a*a == b*b + c*c)
        {
            cout<<"TRIANGULO RETANGULO"<<endl;
        }
        if(a*a > b*b + c*c)
        {
            cout<<"TRIANGULO OBTUSANGULO"<<endl;
        }
        if( a*a < b*b + c*c)
        {
            cout<<"TRIANGULO ACUTANGULO"<<endl;
        }
        if(a==b && b==c)
        {
            cout<<"TRIANGULO EQUILATERO"<<endl;
        }
        if(a==b && a!=c || b==c && b!=a || c==a && c!=b)
        {
            cout<<"TRIANGULO ISOSCELES"<<endl;
        }
        
        return 0;
        
}