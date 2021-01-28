#include <iostream>

using namespace std;

int main()
{ 
    int t;
    cin>>t;

    for (int i=0; i<t ; i++)
    {
        int pa=0,pb=0,j=0,a=0,b=0;
        double ga=0,gb=0;
        cin>>pa>>pb>>ga>>gb;

        while(pa<=pb)
        {
            pa*=(ga/100.0)+1.0;
            pb*=(gb/100.0)+1.0;
            j++;
            if(j>100)
            break;
        }

        if(j>100)
        {
            cout<<"Mais de 1 seculo."<<endl;
        }
        else
        {
            cout<<j<<" anos."<<endl;
        }
    }

    return 0;
}