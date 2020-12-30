#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b=1,c=0;
        cin>>a;
       while(b<a)
       {
           if(a%b==0)
           {
               c+=b;
           }
           b++;
       }
        if(c==a)
        {
            cout<<a<<" eh perfeito"<<endl;
        }
        else if(c!=a)
        {
            cout<<a<<" nao eh perfeito"<<endl;
        }        
    }
    return 0;
}