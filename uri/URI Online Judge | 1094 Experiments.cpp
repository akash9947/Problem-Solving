#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
   double a,c=0,r=0,s=0,x,t;
   double ca,ra,sa;
   char y;
   cin>>a;
   for(int i=0;i<a;i++)
   {
       cin>>x>>y;
       if(y=='C')
       {    
           c=c+x;

       }
      else if(y=='R')
       {    
           r=r+x;

       }
      else if(y=='S')
       {    
           s=s+x;

       }
              
   }
    t=c+r+s;
    cout<<"Total: "<<t<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<c<<endl;
    cout<<"Total de ratos: "<<r<<endl;
    cout<<"Total de sapos: "<<s<<endl;

    ca=(c/t)*100;
    ra=(r/t)*100;
    sa=(s/t)*100;

    cout<<setprecision(2)<<fixed<<"Percentual de coelhos: "<<ca<<" %"<<endl;
    cout<<setprecision(2)<<fixed<<"Percentual de ratos: "<<ra<<" %"<<endl;
    cout<<setprecision(2)<<fixed<<"Percentual de sapos: "<<sa<<" %"<<endl;

    return 0;
}