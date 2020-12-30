#include <iostream>
using namespace std;

int main()
{ 
    int a,b,c=0;
    cin>>a>>b;

    for (int i=1;i<=b;i++)
    {
        // cout<<i<<" ";
        // for (int j = 0; j < a-1; j++)
        // {
        //     i++;
        //     cout<<i<<" ";
        // }
        // cout<<endl;

        c++;
        cout<<i;
        if(c==a)
        {
            cout<<endl;
            c=0;
        }
        else 
        {
            cout<<" ";
        }
            
    }

    return 0;
}