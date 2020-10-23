#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    while(1)
    {

    
        double a[2],b,c;
        int d=0;

        while (d<2)
        {
            cin>>b;
            if(b>=0 && b<=10)
            {
                a[d]=b;
                d++;
            }
            else {
                cout<<"nota invalida"<<endl;
            }
        }

        cout<<setprecision(2)<<fixed<<"media = "<<(a[0]+a[1])/2<<endl;


        do 
        {   
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
            cin>>c;
        }
        while(c<1 || c>2);

        if(c==1)
            continue;
        
        break;
        
    }
}