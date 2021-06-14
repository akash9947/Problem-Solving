#include <iostream>
#include <iomanip>

using namespace std;

int main()
{   
    int a;

    while (cin>>a)
    {
        int b,c=0;
        b=a-1;
        
        for(int i=0;i<a;i++)
        {
            for (int j=0;j<a;j++)
            {
                
                if(j!=i && j!=b)
                {
                    cout<<3;

                }
                else if(j==b)
                {
                    cout<<2;
                    
                }
                else if(j==i)
                {
                    cout<<1;
                }
                                        
            }

            b--;
            cout<<endl;
        }
    }
}