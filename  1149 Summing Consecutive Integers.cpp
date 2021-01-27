#include <iostream>

using namespace std;

int main()
{
    int a,n,r=0;
    cin>>a>>n;
    
    while (1)
    {
        cin>>n;
        if (n>0)
        break;
        else 
        continue;            
    }
    
    for (int i = a ; i< a+n ; i++ )
    {
        r+=i;
    }

    cout<<r<<endl;
    return 0;
}