#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double m[12][12],sum=0.0;
    int a;
    char n;
    cin>>a>>n;

    for(int i=0;i<12;i++)
    {
        for (int j=0;j<12;j++) 
        {
            cin>>m[i][j];
        }
        
     }

     for (int i=0;i<12;i++)
     {
         sum += m[i][a];
     }

    if(n =='S')
    {
        cout<<setprecision(1)<<fixed<<sum<<endl;
    }

    else
    {
        cout<<setprecision(1)<<fixed<<sum/12<<endl;
    }


}
