#include <iostream>

using namespace std;

int main()
{
    int a, b;
    do 
    {
        cin>>a>>b;
        if(a!=b)
        {
        if(a<b)
        {
            cout<<"Crescente"<<endl;
        }
        else 
        {
            cout<<"Decrescente"<<endl;
        }
        }
        
    }
    while(a!=b);

    return 0;
}