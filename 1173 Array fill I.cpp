#include <iostream>

using namespace std;

int main()
{
    int n[10],i,j;
    cin>>j;

    for ( i = 0 ; i<10; i++)
    {
        n[i]=j;
        cout<<"N["<<i<<"]"<<" = "<<n[i]<<endl;
        j=j*2;
    }
}