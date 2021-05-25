#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double m[12][12],sum=0.0;
    char n;
    int z=1;
    cin>>n;

    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>m[i][j];
        }
    }

    for (int i=0;i<12;i++)
    {
        for(int j=z;j<12;j++)
        {
            sum += m[i][j];
        }
        z++;
    }

    if(n =='S')
    {
        cout<<setprecision(1)<<fixed<<sum<<endl;
    }
    else if (n== 'M')
    {
        cout<<setprecision(1)<<fixed<<sum/66.0<<endl;
    }
    return 0;
}