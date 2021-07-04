#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a;

    while (cin>>a && a!=0)
    {

        for(int i=0;i<a;i++)
        {
            int m=i+1;
            for(int j=0;j<=i;j++)
            {
                if(j==0)
                {
                    cout<<" ";
                }
                cout<<" "<<setw(3)<<m;
    
                m--;
                if(m==0)
                {
                    for (int i=0;i<a-j-1;i++)
                    {
                        cout<<" "<<setw(3)<<i+2;
                                     
                    }
                }
            }
            cout<<endl;
        }   
    }
}   