#include <iostream>
using namespace std;

int main()
{
    int a,al=0,gas=0,di=0;

    while (1)
    {
        cin>>a;
        if (a==1)
        {
            al++;
        }
        else if (a==2)
        {
            gas++;
        }
        else if(a==3)
        {
            di++;
        }

        if (a==4)
            break;

        else 
            continue;
        
    }    
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<al<<endl;
    cout<<"Gasolina: "<<gas<<endl;
    cout<<"Diesel: "<<di<<endl;

    return 0;
}