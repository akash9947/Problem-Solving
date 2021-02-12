#include <iostream>

using namespace std;

int main()
{
    int x,i,j=0;
    cin>>x;
    for(i=0;i<1000;i++)
    {
        cout<<"N["<<i<<"] = "<<j<<endl;
        j++;
        if(j==x)
        {
            j=0;
        }
    }
}