#include <iostream>

using namespace std;

int main()
{
    int n[20],j=0;
    for (int i = 0;i<20;i++ )
    { 
        cin>>n[i];
    }

    for (int i = 19;i>=0;i--)
    {
        cout<<"N["<<j<<"] = "<<n[i]<<endl;
        j++;
    }
}  
