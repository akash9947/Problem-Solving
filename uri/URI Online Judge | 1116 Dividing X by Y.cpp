#include <iostream>

using namespace std;

int main()
{
    double n, a,b;
    double c=0;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(b!=0)
        {
            c=a/b;
            cout<<c<<endl;
        }
        else
        {
            cout<<"divisao impossivel"<<endl;
        }
        
    }

    return 0;
}