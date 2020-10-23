#include <iostream>

using namespace std;

int main()
{
    double a=0;

    do
    {
        cin>>a;
        if(a==2002)
        {
            cout<<"Acesso Permitido"<<endl;
        }
        else
        {
            cout<<"Senha Invalida"<<endl;
        }
        
    } while (a!=2002);
    

    return 0;
}