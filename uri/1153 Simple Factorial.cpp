#include <iostream>

using namespace std;

int main()
{
    int n,a;
    cin>>n;
    a=n;
    
    while (1)
    {
        n--;
        a=(a*n);
        if(n==1)
        break;
    }
    
    cout<<a<<endl;

    return 0;
}