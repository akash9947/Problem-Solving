#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double array [12][12],sum=0.0;
    int n;   
    char r;
    cin>>n>>r;
    for(int i=0 ; i<12; i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>array[i][j];
        }
    }

    for(int i=0;i<12;i++)
    {
        sum+= array[n][i];
    }

    if(r=='S')
    {
        cout<<setprecision(1)<<fixed<<sum<<endl;
    }
    else if(r=='M')
    {
        cout<<setprecision(1)<<fixed<<sum/12.0<<endl;
    }
}