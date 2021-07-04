#include<iostream>
using namespace std;

int main()
{
    int a,rf=0;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        int x,y,z,r=0;
        cin>>x>>y>>z;
        if(x==1)
        {
            r++;
        }
        if(y==1)
        {
            r++;
        }
        if(z==1)
        {
            r++;
        }
        if(r>=2)
        {
            rf++;
        }
        
    }
    cout<<rf<<endl;
}
