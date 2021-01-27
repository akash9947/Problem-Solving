#include <iostream>
#include <algorithm> 
using namespace std;

int main(){
    int a,b,c,d;

    cin>>a>>b>>c;
    
    if(a+b>c && a+c>b && b+c>a)
    {
        cout<<"Perimetro = "<<a+b+c<<endl;
    }

    else
    {
        d=((a+b)/2)*c;
        cout<<"Area = "<<d<<endl;

    }

    return 0;
}