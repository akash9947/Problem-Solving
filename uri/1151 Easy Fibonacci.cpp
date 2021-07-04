#include <iostream>

using namespace std;

int main()
{
    int a=0,b=1,c=0,n;
    cin>>n;

    for(int i = 0 ; i<n ; i++)
    {
        cout<<c;
        c=b+a;
        b=a;
        a=c;
        if(i<n-1)
        {
            cout<<" ";
        }
        
    }
    cout<<endl;

    return 0;
}