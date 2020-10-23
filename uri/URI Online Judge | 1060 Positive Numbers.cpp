#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a,ah,am,as,b,bh,bm,bs,w,x,y,z;
    string t1,t2,t3,t4,t5,t6;
    cin>>t1>>a;
    cin>>ah>>t2>>am>>t3>>as>>t4>>b>>bh>>t5>>bm>>t6>>bs;
    
    w=b-a;
    x=bh-ah;
    y=bm-am;
    z=bs-as;

    if(x<0)
    {
        x=24+(bh-ah);
        w--;
    }
    if(y<0)
    {
        y=60+(bm-am);
        x--;
    }
    if(z<0)
    {
        z=60+(bs-as);
        y--;
    }
     
    cout<<w<<" dia(s)"<<endl;
    cout<<x<<" hora(s)"<<endl;
    cout<<y<<" minuto(s)"<<endl;
    cout<<z<<" segundo(s)"<<endl;
   
   return 0;
}