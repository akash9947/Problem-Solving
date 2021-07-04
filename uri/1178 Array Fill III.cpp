#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double n;
    cin>>n;
    for(int i=0; i<100; i++)
    {
        cout<<setprecision(4)<<fixed<<"N["<<i<<"] = "<<n<<endl;
        n=n/2.0;
    }
}