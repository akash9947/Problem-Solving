#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double m[12][12], sum=0.0;
    char n;
    int a=1,b=11;
    cin>>n;

    for(int i=0;i<12;i++)
    {
        for (int j=0;j<12;j++)
        {
            cin>>m[i][j];
        }
    }

    for(int j=11;j>6;j--)
    {   
        for(int i=a;i<b;i++)    
        {
            sum+=m[i][j];
        }
        a++;
        b--;
    }

    if(n=='S')
    {
        cout<<setprecision(1)<<fixed<<sum<<endl;
    }
    else
    {
        cout<<setprecision(1)<<fixed<<sum/30.0<<endl;

    }
}