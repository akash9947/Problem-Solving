#include <iostream>

using namespace std;

int main()
{
    int a,b,j=0,c=0;
    cin>>a;
    while (1)
    {    
        cin>>b;
        if (b<a)
        continue;
        else if (b>a)
        break;
    }
    
    for( int i=a; ; i++)
    {
        c=c+i;
        j++;
        if(c>b)
        break;
    }

    cout<<j<<endl;

    return 0;
}