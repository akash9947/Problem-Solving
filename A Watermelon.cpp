#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{ 
    int a;
    cin>>a;

    if(a%2==0 && a!=2)
    {
        cout<<"YES"<<endl;

    }

    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;

}